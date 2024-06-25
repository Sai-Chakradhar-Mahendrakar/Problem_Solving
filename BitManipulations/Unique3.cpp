#include <bits/stdc++.h>
using namespace std;

// Find unique number from trice repeating number

void UpdateSum(vector<int>&sumArr,int x){
    for(int i=0;i<32;i++){
        int ith_bit = (x & (1<<i));
        if(ith_bit){
            sumArr[i]++;
        }
    }
}

int numFromBits(vector<int>sumArr){
    int num=0;
    for(int i=0;i<32;i++){
        num+=(sumArr[i]*(1<<i));
    }
    return num;
}

int Unique(vector<int> v, int n){
    vector<int> sumArr(32,0);

    for(auto i:v){
        UpdateSum(sumArr,i);
    }

    for(int i=0;i<32;i++){
        sumArr[i]=sumArr[i]%3;   //for trice repeating
    }

    return numFromBits(sumArr);
}

int main() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }

    cout<<Unique(v,n);
    return 0;
}


