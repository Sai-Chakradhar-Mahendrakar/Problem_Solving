#include <bits/stdc++.h>
using namespace std;

/*

*/

bool isBalanced(string input){
	//Todo: Complete this method

	stack<char> s;
	for(auto ch : input){

		switch(ch){
			case '(':
			case '[':
			case '{': s.push(ch);
						break;

			case ')': if(!s.empty() and s.top()=='('){
						s.pop();
					  }
					  else{
					  	return false;
					  }
					  break;

			case ']': if(!s.empty() and s.top()=='['){
						s.pop();
					  }
					  else{
					  	return false;
					  }
					  break;

			case '}': if(!s.empty() and s.top()=='{'){
						s.pop();
					  }
					  else{
					  	return false;
					  }
					  break;
			default : continue;	  
		}
	}

	if(s.empty()==true){
		return true;
	}
	return false;
}


int main(){
    string s;
    getline(cin,s);

    cout<<isBalanced(s);

}