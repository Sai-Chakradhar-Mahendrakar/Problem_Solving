#include <bits/stdc++.h>
using namespace std;

// Find the sum of target in array 

vector<int> pairSum(vector<int>a,int sum){
    unordered_set<int> s;
    vector<int> res;
    for(int i=0;i<a.size();i++){
        int x = sum-a[i];
        if(s.find(x)!=s.end()){
            res.push_back(x);
            res.push_back(a[i]);
        }
        s.insert(a[i]);
    }
    return res;
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
    vector<int> ans = pairSum(a,x);
    for(auto x: ans){
        cout<<x<<" ";
    }
}