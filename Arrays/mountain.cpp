#include <bits/stdc++.h>
using namespace std;

// Return length of highest mountain
// 5 10 8
//      10
//     5  8
// Total width: 3

int mountain(vector<int>a){
    int n=a.size();
    int lar=0;
    for(int i=0;i<=n-2;i++){
        if(a[i]>a[i-1] and a[i]>a[i+1]){
            int cnt=1;
            int j=i;
            // Reverse decreasing
            while(j>=1 and a[j]>a[j-1]){
                j--;
                cnt++;
            }
            // Forward decreasing
            while(i<=n-1 and a[i]>a[i+1]){
                i++;
                cnt++;
            }
            lar=max(lar,cnt);
        }
        else{
            i++;
        }
    }
    return lar;
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
    cout<<mountain(a);
}