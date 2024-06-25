#include <bits/stdc++.h>
using namespace std;

// if val is not present then return smallest nearer val using binay search
int lower_bound(int a[],int val,int n){
    int s=0;
    int e=n-1;
    int ans = -1;
    while(s<=e){
        int mid = (s+e)/2;
        //looking for largest no
        if(a[mid]<=val){
            ans = a[mid];
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter Size: ";
    cin>>n;
    int a[n];
    cout<<"Enter array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cout<<"Enter val: ";
    cin>>x;
    cout<<"Lower Bound "<<lower_bound(a,x,n);
    return 0;
}