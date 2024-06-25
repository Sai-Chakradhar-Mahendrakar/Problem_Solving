#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[1000]={'1','a','b','\0'};
    string str;
    string s1 = "hello";
    string s2("hi");
    
    // Input from the user
    getline(cin,str);
    cout<<str;
    getline(cin,str,'.');  // . is delimiter when to stop
    cout<<str;

    vector<string>sarr;
    
    string para;

    //find 
    para.find(s);  //returns int size_t 
    // if == -1 not found
    

    //occurence
    int in = para.find(s,in+1);
}