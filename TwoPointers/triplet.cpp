#include <bits/stdc++.h>
using namespace std;

// find all pair of sum with 3 #

vector<vector<int>> triplet(vector<int> a,int sum){
    sort(a.begin(),a.end());
    vector<vector<int>> res;
    int n=a.size();
    for(int i=0;i<=n-3;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            int cs=a[i];
            cs+=a[j];
            cs+=a[k];
            if(cs==sum){
                res.push_back({a[i],a[j],a[k]});
                j++;
                k--;
            }
            else if(cs>sum){
                k--;
            }
            else{
                j++;
            }
        }
    }
    return res;
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
    vector<vector<int>> res = triplet(a,x);
    for (auto& vec : res) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}
}