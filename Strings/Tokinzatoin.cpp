#include<iostream>
#include<sstream>
#include<vector>
#include<cstring>
using namespace std;

char *mystrtok(char *str,char delim){

    static char *input = NULL;
    
    if(str!=NULL){
        input = str;
    }
    if(input==NULL){
        return NULL;
    }
    //static
    char *token = new char[strlen(input)+1];
    int i=0;

    for( ; input[i]!='\0';i++){
        if(input[i]!=delim){
            token[i] = input[i];
        }
        else
        {
            token[i] = '\0';
            input = input + i + 1;
            return token;
        }
    }

    //out of the loop
    token[i] = '\0';
    //reset the input as nULL
    input = NULL;
    return token;
}



int main(){

	string input;
	getline(cin,input);
	//"this is a sunny day"

	//create a string stream object
	stringstream ss(input);

	// >> and << operators 
	string token;
	vector<string> tokens;
	while(getline(ss,token,' ')){
		tokens.push_back(token);
	}

	//print all all tokens
	for(auto token:tokens){
		cout<<token<<",";
	}

    char inp[1000];
    cin.getline(inp,1000);
    //strtok()
     char *token =  strtok(inp," ");
     

     while(token!=NULL){
        cout<<token <<endl;
        token = strtok(NULL," ");
     }
     
	return 0;
}