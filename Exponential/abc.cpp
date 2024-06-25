#include <bits/stdc++.h>
using namespace std;

// (a x b)% c

int mult(int a,int b,int c){
    int res=0;
    while(b){
        if(b&1){
            res+=a;
            res%=c;
        }
        a=2*a;
        a%=c;
        b=(b>>1);
    }
    return res;
}

int main(){
    int a;
    int b;
    int c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<mult(a,b,c);
}