#include<iostream>
#include<queue>
using namespace std;


int main(){

	int arr[] = {10,15,20,13,6,90};
	int n = sizeof(arr)/sizeof(int);

	priority_queue<int, vector<int> , greater<int> >  heap;

	for(int x : arr){
		heap.push(x);
	}
	
	// for(auto i: heap){   Not Work 
	// 	cout << heap.top() <<endl;
	// 	// heap.pop(); 
	// }

	while(!heap.empty()){
		cout << heap.top() <<endl;
		heap.pop(); 
	}




	return 0;
}