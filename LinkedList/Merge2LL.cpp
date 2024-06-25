#include <bits/stdc++.h>
using namespace std;

/*
    Creating Node
    Insertion on head
    Insertion in middle
*/

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data=data;
            next=NULL;
        }
};

Node* Merge(Node* a,Node* b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }

    Node* c;
    if(a->data<b->data){
        c=a;
        c->next=Merge(a->next,b);
    }
    else{
        c=b;
        c->next=Merge(a,b->next);
    }
    return c;
}

void insertAtHead(Node* &head,int data){
    if(head==NULL){
        head=new Node(data);
        return;
    }
    Node *n=new Node(data);
    n->next=head;
    head=n;
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head=head->next;
    }
}

void insertOnmiddle(Node* head,int data,int pos){
    if(pos==0){
        insertAtHead(head,data);
    }
    else{
        Node*temp=head;
        for(int jumps=0;jumps<pos-2;jumps++){
            temp=temp->next;
        }
        Node *n=new Node(data);
        n->next=temp->next;
        temp->next=n;
    }
}

int main(){
    Node *head=NULL;
    insertAtHead(head,9);
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,6);
    cout<<endl;
    insertOnmiddle(head,99,3);
    print(head);

    Node *tail=NULL;
    insertAtHead(tail,8);
    insertAtHead(tail,9);
    insertAtHead(tail,3);
    insertAtHead(tail,4);
    insertAtHead(tail,5);
    cout<<endl;
    print(tail);

    Node* merg=Merge(head,tail);
    cout<<endl;
    print(merg);
}