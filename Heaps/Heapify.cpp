#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int i, int n){
	int mi = i;
	int left = 2*i+1;
	int right = 2*i+2;
	
	if(arr[i]<arr[left] and left<n){
		mi = left;
	}
	
	if(arr[mi]<arr[right] and right<n){
		mi = right;
	}
	
	if(mi!=i){
		swap(arr[i],arr[mi]);
		heapify(arr,mi,n);
	}
	
}

void print(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}


int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
        cin >> a[i];
    }
	
	for(int i=n/2-1;i>=0;i--){
		heapify(a,i,n);
	}

    for(int i=n-1;i>=0;i--){
        swap(a[0],a[i]);
		heapify(a,0,i);
	}
	
	print(a,n);
	
}