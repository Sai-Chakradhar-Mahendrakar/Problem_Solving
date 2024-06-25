// io: 1 2 3 4 5
// op: 234, ...

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Size: ";
    cin>>n;
    int a[n];
    cout<<"Enter array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //subarray
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<a[k];
            }
            cout<<endl;
        }
    }
}