#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>&a){
    int n=a.size();
    for(int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(j>=0 and a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
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
    insertionSort(a);
    for(auto x: a){
        cout<<x<<" ";
    }
}