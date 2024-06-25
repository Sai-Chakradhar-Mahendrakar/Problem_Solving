#include <bits/stdc++.h>
using namespace std;

bool divideAmongK(vector<int>a,int k,int min_coins){
    int n = a.size();
    int partition=0;
    int current_friend=0;
    for(int i=0;i<n;i++){
        if(current_friend+=a[i]>=min_coins){
            partition+=1;
            current_friend=0;
        }
        else{
            current_friend+=a[i];
        }
    }
    return partition>=k;
}

int k_partition(vector<int> a,int k){
    int s=0;
    int e=0;
    for(auto i:a){
        e+=i;
    }
    int ans;
    while(s<=e){
        int mid=(s+e)/2;
        
        bool isPossible=divideAmongK(a,k,mid);

        if(isPossible){
            s=mid+1;
            ans=mid;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
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

    cout<<k_partition(a,x);
}