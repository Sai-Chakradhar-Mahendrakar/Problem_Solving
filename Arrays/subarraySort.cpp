#include <bits/stdc++.h>
using namespace std;

// smallest subarray that need to sorted to make complete array sorted
// io: 1 2 3 4 5 8 7 6 9 10 11
// op: [5,7] index

bool outOfOrder(vector<int>a,int i){
    int x=a[i];
    if(i==0){
        return x>a[1];
    }
    if(i==a.size()-1){
        return x<a[i-1];
    }
    return x>a[i+1] or x<a[i-1];
}

pair<int,int>subarraySort(vector<int>a){
    int smallest=INT_MAX;
    int largest=INT_MIN;

    for(int i=0;i<a.size();i++){
        int x=a[i];
        if(outOfOrder(a,i)){
            smallest=min(smallest,x);
            largest=max(largest,x);
        }
    }

    if(smallest==INT_MIN){
        return {-1,-1};
    }
    int left=0;
    while(smallest>=a[left]){
        left++;
    }
    int right=a.size()-1;
    while(largest<=a[right]){
        right--;
    }
    return {left,right};
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
    pair<int,int> ans = subarraySort(a);
    cout<<"["<<ans.first<<","<<ans.second<<"]";
}