#include <bits/stdc++.h>
using namespace std;

/*
    O(logN) a^n;
*/

int fastExponential(int a,int n){
    int ans=1;
    while(n>0){
        int last_bit=(n&1);
        if(last_bit){
            ans=ans*a;
        }
        a=a*a;
        n=n>>1;
    }
    return ans;
}

int main(){
    int a;
    cin>>a;
    int n;
    cin>>n;
}