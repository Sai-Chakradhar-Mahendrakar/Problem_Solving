#include <bits/stdc++.h>
using namespace std;

string simplifyPath(string path){
    // 1. Tokenisation and filtering
    istringstream iss(path);
    vector<string> tokens;
    string token;
    while(getline(iss,token,'/')){
        if(token=="." or token==""){
            continue;
        }
        tokens.push_back(token);
    }

    // 2. operations(..)
    vector<string> stack;    
    stack.push_back("");

    for(auto t:tokens){
        if(t==".."){
            if(stack[stack.size()-1]!=""){
                stack.pop_back();
            }
        }
        else{
            stack.push_back(t);
        }
    }

    if(stack.size()==1 and stack[0]==""){
        return "/";
    }

    ostringstream oss;
    int i=0;
    for(auto t:stack){
        if(i!=0){
            oss<<"/";
        }
        oss<<t;
        i++;
    }
    return oss.str();
}

int main(){
    string path;
    cin>>path;

    string ans;
    ans=simplifyPath(path);
    cout<<ans;
    return 0;
}
