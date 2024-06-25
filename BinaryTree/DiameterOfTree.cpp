#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d){
            data=d;
            left=NULL;
            right=NULL;
        }
};

Node* buildTree(){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }

    Node *n = new Node(d);
    n->left=buildTree();
    n->right=buildTree();

    return n;
}

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);
    return 1+max(h1,h2);
}

int diameter(Node* root){
    if(root==NULL){
        return 0;
    }

    int D1 = height(root->left) + height(root->right);
    int D2 = diameter(root->left);
    int D3 = diameter(root->right);
    
    return max(D1,max(D2,D3));
}

int main(){
    Node* root=buildTree();
    cout<<diameter(root);
    return 0;
}