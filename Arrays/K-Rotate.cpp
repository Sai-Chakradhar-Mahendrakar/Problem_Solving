#include <bits/stdc++.h>
using namespace std;

// Rotate the array k times

// ip: 1 3 5 7 9  x=2
// op: 7 9 1 3 2

// Method 1
void rotate(vector<int> a,int k){
    vector <int> out;
    int n = a.size();
    for(int i=n-k;i<=n-1;i++){
        out.push_back(a[i]);
    }
    for(int i=0;i<n-k;i++){
        out.push_back(a[i]);
    }
    for(auto x: out){
        cout<<x<<" ";
    }
}

// Method 2
void kRotate(vector<int> a,int k){
    int n = a.size();
    k = k%n;
    reverse(a.begin(),a.begin()+n-k);
    reverse(a.begin()+n-k,a.end());
    reverse(a.begin(),a.end());
    for(auto x: a){
        cout<<x<<" ";
    }
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
    rotate(a,x);
    cout<<endl;
    kRotate(a,x);
}
