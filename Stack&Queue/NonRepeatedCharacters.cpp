#include <bits/stdc++.h>
using namespace std;

/*
    return non repeated character
*/

int main(){
    queue<char>q;
    int freq[27]={0};// a-z

    char ch;
    cin>>ch;

    while(ch!='.'){
        q.push(ch);
        freq[ch-'a']++;

        while(!q.empty()){
            int idx=q.front()-'a';
            
            if(freq[idx]>1){
                q.pop();
            }
            else{
                cout<<q.front()<<" ";
                break;
            }
        }

        if(q.empty()){
            cout<<"-1"<<" ";
        }
        cin>>ch;
    }
}