#include <bits/stdc++.h>
using namespace std;

// Find two unique # from twice repeating series

void Unique(vector<int>a,int n){
    int res=0;
    for(auto i:a){
        res^=i;
    }

    int pos=0;
    int temp=res;
    while((temp&1)==0){
        pos++;
        temp = (temp>>1);
    }

    int setA=0;
    int setB=0;

    int mask = 1<<pos;

    for(auto i:a){
        if((i&mask)>0){
            setA ^= i;
        }
        else{
            setB ^= i;
        }
    }

    cout<<setA<<" "<<setB;
}

int main() {
    vector<int> a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        a.push_back(k);
    }
    
    Unique(a,n);
    return 0;
}
