#include <bits/stdc++.h>
using namespace std;

// Largest sum of subarray

int main(){
    int n;
    cout<<"Enter Size: ";
    cin>>n;
    int a[n];
    cout<<"Enter array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    //sum O(n3) Brute force
    int lar=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=a[k];
            }
            lar = max(lar,sum);
        }
    }
    cout<<"Largest Subarray sum "<<lar<<endl;

    //prefix sum -> T:O(n2), S:O(n) 
    int pre[n] = {0};
    pre[0] = a[0];
    for(int i=1;i<n;i++){
        pre[i] = pre[i-1]+a[i];
    }
    int larg = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = i>0 ? pre[j] - pre[i-1] : pre[j];
            larg = max(larg,sum);
        }
    }
    cout<<"Largest Subarray sum "<<larg<<endl;
    
    //Kadane O(n)
    int cs=0;
    int mx=0;
    for(int i=0;i<n;i++){
        cs = cs+a[i];
        if(cs<0){
            cs = 0;
        }
        mx = max(mx,cs);
    }
    cout<<"Largest Subarray sum "<<mx<<endl;

    //All negative special case
    bool alneg = true;
    int largest = INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            alneg = false;
        }
        largest = max(largest,a[i]);
    }
    if(alneg){
        cout<<"Largest Subarray sum "<<largest<<endl;
    }
}