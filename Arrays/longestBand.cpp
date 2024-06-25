#include <bits/stdc++.h>
using namespace std;

// max subsequence 0->1->2->3->4...

int largestBand(vector<int>a){
    int n=a.size();
    int lar=0;
    unordered_set<int> s;
    for(int x:a){
        s.insert(x);
    }
    for(auto e:s){
        int p=e-1;
        int next_no = e+1;
        int cnt=1;
        while(s.find(next_no)!=s.end()){
            next_no++;
            cnt++;
        }
        if(cnt>lar){
            lar = cnt;
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
    cout<<largestBand(a);
}