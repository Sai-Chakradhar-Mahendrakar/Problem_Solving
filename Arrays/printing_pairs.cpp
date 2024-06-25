// io: 1 2 3 4
// op: (1,2),(2,3),(3,4),(1,3),(1,4),(2,4)


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

    //pairs
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            cout<<"("<<a[i]<<","<<a[j]<<")"<<endl;
        }
    }
    return 0;
}