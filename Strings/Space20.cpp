#include <bits/stdc++.h>
using namespace std;

// add %20 in space 

void replaceSpace(char *str){
    int space=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            space+=1;
        }
    }

    int idx = strlen(str)+2*space;
    str[idx]='\0';
    for(int i=strlen(str)-1;i>=0;i--){
        if(str[i]==' '){
            str[idx-1]='0';
            str[idx-2]='2';
            str[idx-3]='%';
            idx-=3;
        }
        else{
            str[idx-1]=str[i];
            idx--;
        }
    }
}

int main(){
    char input[10000];
    cin.getline(input,1000);
    replaceSpace(input);

    cout<<input <<endl;

    return 0;
}