#include <bits/stdc++.h>
using namespace std;

int countSubSets(vector<int>a,int n,int i,int x){
    if(i==n){
        if(x==0){
            return 1;
        }
        return 0;
    }

    int inc=countSubSets(a,n,i+1,x-a[i]);
    int exc=countSubSets(a,n,i+1,x);
    return inc+exc;
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

    cout<<countSubSets(a,a.size(),0,x);
}