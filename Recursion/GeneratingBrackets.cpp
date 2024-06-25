#include <bits/stdc++.h>
using namespace std;

void generateBrackets(string output,int n,int open,int close,int i){
    if(i==2*n){
        cout<<output<<endl;
        return;
    }

    if(open<n){
        generateBrackets(output+'(',n,open+1,close,i+1);
    }

    if(close<open){
        generateBrackets(output+')',n,open,close+1,i+1);
    }

}

int main(){
    int n;
    cin>>n;
    string output;
    generateBrackets(output,n,0,0,0);
}