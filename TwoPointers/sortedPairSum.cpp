#include <bits/stdc++.h>
using namespace std;

// given sorted array and x find closer sum to x

// ip: 10 22 28 29 30 40
// x = 54
// op: 22 30  -> abs(52-54) is min

pair<int,int> closetSum(vector<int>a,int x){
    int n=a.size();
    int s=0;
    int e=n-1;
    int lefind,rigind;
    int diff = INT_MAX;
    while(s<=e){
        int cs = a[s]+a[e];
        if(abs(cs-x)<diff){
            lefind = s;
            rigind = e;
            diff = abs(cs-x);
        }
        cs>x ? e-- :s++;
    }
    return {a[lefind],a[rigind]};
}

int main(){
    int n;
    cout<<"Enter Size: ";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cout<<"Enter val: ";
    cin>>x;
    pair<int,int> ans = closetSum(a,x);
    cout<<ans.first<<","<<ans.second;
}