#include <bits/stdc++.h>
#define int long long int
using namespace std;

// (a^b)% 10^9
int mod = 1e9+7;

int pow(int a,int b){
    int res=1;
    while(b){
        if(b&1){
            res*=a;
            res%=mod;
        }
        a*=a;
        a%=mod;
        b=(b>>1);
    }
    return res;
}

int32_t main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    cout<<pow(a,b);
}