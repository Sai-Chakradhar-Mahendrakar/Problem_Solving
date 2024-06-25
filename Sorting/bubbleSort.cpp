#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>&a){
    int n=a.size();
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
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
    bubbleSort(a);
    for(auto x: a){
        cout<<x<<" ";
    }
}