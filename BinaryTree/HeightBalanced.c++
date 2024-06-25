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

Node* levelOrderBuild(){
    int d;
    cin>>d;

    Node* root = new Node(d);
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* current = q.front();
        q.pop();
        int c1,c2;
        cin>>c1>>c2;

        if(c1!=-1){
            current->left=new Node(c1);
            q.push(current->left);
        }
        if(c2!=-1){
            current->right=new Node(c2);
            q.push(current->right);
        }
    }
    return root;
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

pair<int,bool> isHeightBalanced(Node* root){
    pair<int,bool> p;
    
    if(root==NULL){
        p.first = 0;
        p.second = true;
        return p;
    }

    pair<int,bool> left, right;

    left = isHeightBalanced(root->left);
    right = isHeightBalanced(root->right);

    int height = max(left.first,right.first)+1;
    
    if(abs(left.first-right.first)<=1 and left.second and right.second){
        return make_pair(height,true);
    }
    
    return make_pair(height,false);
}

int main(){
    Node* root=levelOrderBuild();
    levelOrderPrint(root);

    pair<int,bool> p = isHeightBalanced(root);
    cout<<p.first<<" "<<p.second;
    return 0;
}