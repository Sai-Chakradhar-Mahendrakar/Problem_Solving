#include <bits/stdc++.h>
using namespace std;

/*
    Get ith bit;
*/

int getIthBit(int n,int i){
    int mask=(1<<i);
    return (n&mask)>0?1:0;
}

void setIthBit(int &n,int i){
    int mask=(1<<i);
    n=(n|mask);
}

void clearIthBit(int &n,int i){
    int mask=~(1<<i);
    n=(n&mask);
}

void updateIthBit(int &n,int i,int v){
    clearIthBit(n,i);
    int mask=(v<<i);
    n=(n|mask);
}

int clearLastIthBit(int &n,int i){
    int mask=(-1<<i);
    n=(n&mask);
}

void clearBitsInRange(int &n,int i,int j){
    int a=(~0)<<(j+1);
    int b=(1<<j)-1;
    int mask=a|b;
    n=(n&mask);
}

void replaceBits(int &n,int i,int j,int m){
    clearBitsInRange(n,i,j);
    int mask=(m<<i);
    n=(n|mask);
}

int main(){
    int n;
    cin>>n;

    cout<<getIthBit(n,2);
    cout<<setIthBit(n,2);
    cout<<

}