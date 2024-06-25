#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
    int a[] = {4,5,3,9,-11,5,2,5};
	int n=8;

	int p[8]={0};
	p[0]=a[0];
	for(int i=1;i<n;i++){
		p[i]=p[i-1]+a[i];
	}

	int max_ele = 0;
	for(int i=1;i<n;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			sum = p[j]-p[i-1];
		}
		max_ele = max(max_ele,sum);
	}

	cout<<max_ele;
	int cs=0,lar=0;
	for(int i=0;i<n;i++){
		cs+=a[i];
		if(cs<0){
			cs=0;
		}
		lar = max(lar,cs);
	}

	cout<<lar;

}
