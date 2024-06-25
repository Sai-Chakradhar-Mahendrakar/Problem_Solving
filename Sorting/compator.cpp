#include <bits/stdc++.h>
using namespace std;

bool cmp1(int a,int b){
    return a<b;
}

bool cmp2(int a,int b){
    return a>b;
}

int main() {
	// your code goes here
    int n=6;
    int a[]={10,3,5,3,2,1};
    cout<<"Before: ";
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    // sort(a,a+n);
    // cout<<"After Normal Sort: ";
    // for(auto i:a){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    sort(a,a+n,cmp1);
    cout<<"After cmp(a<b) Sort: ";
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    sort(a,a+n,cmp2);
    cout<<"After cmp(a>b) Sort: ";
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;

}