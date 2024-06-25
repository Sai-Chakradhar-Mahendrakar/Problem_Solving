#include <bits/stdc++.h>
using namespace std;

// array 1 means 1 unit tall 
// find the all area where the water fits 
// 1 0 2  -> 1 unit 

int trappedWater(vector<int>a){
    int n=a.size();
    if(n<=2){
        return 0;
    }
    vector<int>left(n,0);
    vector<int>right(n,0);
    left[0]=a[0];
    right[n-1]=a[n-1];
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],a[i]);
        right[n-i-1]=max(right[n-i],a[n-i-1]);
    }
    int w=0;
    for(int i=0;i<n;i++){
        w+=min(left[i],right[i])-a[i];
    }
    return w;
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
    cout<<trappedWater(a);
}
