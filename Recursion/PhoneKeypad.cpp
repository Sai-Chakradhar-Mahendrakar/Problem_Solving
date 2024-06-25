#include <bits/stdc++.h>
using namespace std;

string keypad[] = {"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void phoneKeypad(string inp,string op,int i){
    if(inp[i]=='\0'){
        cout<<op<<endl;
        return;
    }

    int cur_digit = inp[i]-'0';
    if(cur_digit==0 or cur_digit==1){
        phoneKeypad(inp,op,i+1);
    }

    for(int k=0;k<keypad[cur_digit].size();k++){
        phoneKeypad(inp,op+keypad[cur_digit][k],i+1);
    }
    return;
}

int main(){
    string inp;
    string op;
    cin>>inp;

    phoneKeypad(inp,op,0);
}