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

class HDpair{
    public:
        int height;
        int diameter;
};

HDpair optDiameter(Node* root){
    HDpair p;
    if(root==NULL){
        p.height=p.diameter=0;
        return p;
    }

    HDpair left =  optDiameter(root->left);
    HDpair right = optDiameter(root->right); 

    p.height = max(left.height,right.height)+1;

    int D1 = left.height + right.height;
    int D2 = left.diameter;
    int D3 = right.diameter;

    p.diameter = max(D1,max(D2,D3));
    return p;
}

int main(){
    Node* root=buildTree();
    levelOrderPrint(root);
    HDpair res = optDiameter(root);
    cout<<res.diameter<<" "<<res.height;
    return 0;
}