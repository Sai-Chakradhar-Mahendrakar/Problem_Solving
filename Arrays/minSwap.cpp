#include <bits/stdc++.h>
using namespace std;

// ip: 5 4 3 2 1
// op: 2 min swaps to sort the array

int countMinSwaps(vector<int>a){
    int n=a.size();
    pair<int,int> ap[n]; //To store the element and its position
    for(int i=0;i<n;i++){
        ap[i].first=a[i];
        ap[i].second=i;
    }

    sort(ap,ap+n);
    vector<bool> visited(n,false);
    int ans=0;

    for(int i=0;i<n;i++){
        int old_pos=ap[i].second;
        if(visited[i]==true or old_pos==i){
            continue;
        }
        int node=i;
        int cycle=0;
        while(visited[node]==false){
            visited[node]=true;
            int next_pos=ap[node].second;
            node=next_pos;
            cycle+=1;
        }
        ans+=(cycle-1);
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
    cout<<countMinSwaps(a);
}
