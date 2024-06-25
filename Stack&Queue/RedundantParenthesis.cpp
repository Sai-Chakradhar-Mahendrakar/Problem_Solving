#include <bits/stdc++.h>
using namespace std;

/*

*/

bool checkRedundant(string str){
    stack<char>s;
    for(auto ch:str){
        if(ch!=')'){
            s.push(ch);
        }
        else{
            bool isOperator=false;
            while(!s.empty() and s.top()!='('){
                char top=s.top();
                if(top=='+' or top=='-' or top=='*' or top=='/'){
                    isOperator=true;
                }
                s.pop();
            }
            s.pop();
            if(isOperator==false){
                return true;
            }
        }
    }
    return false;
}

int main(){
    string s;
    getline(cin,s);

    cout<<checkRedundant(s);
}