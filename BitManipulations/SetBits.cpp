#include <bits/stdc++.h>
using namespace std;

/*
    Count 1 set bits in a number
*/

int countBits(int n){
    int count=0;
    while(n>0){
        int last_bit=(n&1);
        count+=last_bit;
        n=n>>1;
    }
    return count;
}

int countBitsFaster(int n){
    int ans=0;
    while(n>0){
        n=n&(n-1);
        ans++;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
}