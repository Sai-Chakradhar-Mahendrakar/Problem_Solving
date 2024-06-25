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

void levelOrderPrint(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        if(temp==NULL){
            cout<<endl;
            q.pop();

            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            q.pop();
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}


int replaceWithSum(Node* root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL and root->right==NULL){
        return root->data;
    }

    int LS = replaceWithSum(root->left);
    int RS = replaceWithSum(root->right);
    
    int temp = root->data;
    root->data = LS+RS;
    return temp+root->data;
}

int main(){
    Node* root=buildTree();
    levelOrderPrint(root);
    replaceWithSum(root);
    cout<<endl;
    levelOrderPrint(root);
    return 0;
}