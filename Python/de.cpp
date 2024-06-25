#include <bits/stdc++.h>
using namespace std;

int max_valid_pairs(int N, std::vector<int> A) { 
   
  std::set<int> A_set(A.begin(), A.end()); 
 
 
  int count = 0; 
 
 
  for (int i = 0; i < N; ++i) { 
    for (int j = i + 1; j < N; ++j) { 
      int product = A[i] * A[j]; 
      if (A_set.count(product) > 0) { 
        count++; 
      } 
    } 
  } 
 
  return count; 
} 

int main(){
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;cin>>a[i++]);

    cout<<max_valid_pairs(n,a);
}