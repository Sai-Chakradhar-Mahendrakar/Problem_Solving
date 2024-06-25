#include <bits/stdc++.h>
using namespace std;

int pow(int a,int b){
    int res=1;
    while(b){
        if(b&1){
            res*=a;
        }
        a*=a;
        b=(b>>1);
    }
    return res;
}

int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    cout<<pow(a,b);
}