#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>>a,int n,int m){
    int startRow=0;
    int startCol=0;
    int endRow=n-1;
    int endCol=m-1;

    while(startCol<=endCol and startRow<=endRow){
        // Start Row
        for(int col=startCol;col<=endCol;col++){
            cout<<a[startRow][col]<<" ";
        }

        // End Col
        for(int row=startRow+1;row<=endRow;row++){
            cout<<a[row][endCol]<<" ";
        }

        // End row  
        for(int col=endCol-1;col>=startCol;col--){
            if(startRow==endRow){
                break;
            }
            cout<<a[endRow][col]<<" ";
        }

        // Start Col
        for(int row=endRow-1;row>=startRow+1;row--){
            if(startCol==endCol){
                break;
            }
            cout<<a[row][startCol]<<" ";
        }

        // Update
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
}

int main(){
    vector<vector<int>> a;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<m;j++){
            int sa;
            cin>>sa;
            temp.push_back(sa);
        }
        a.push_back(temp);
    }
    print(a,n,m);
}