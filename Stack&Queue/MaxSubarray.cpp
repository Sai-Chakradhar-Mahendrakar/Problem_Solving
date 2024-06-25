#include <bits/stdc++.h>
using namespace std;

void maxSubArrayK(vector<int> a,int k){
    // 1. Process only the first k element
    deque<int> q;
    int i;
    for(i=0;i<k;i++){
        while(!q.empty() and a[i]>a[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
    }

    //2. Remaining
    for(;i<=a.size();i++){
        cout<<a[q.front()]<<" ";
        while(!q.empty() and q.front()<=i-k){
            q.pop_front();
        }
        while(!q.empty() and a[i]>a[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
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
    int k;
    cin>>k;
    maxSubArrayK(a,k);
}