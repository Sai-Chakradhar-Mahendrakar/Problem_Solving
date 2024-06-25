#include <bits/stdc++.h>
using namespace std;

/*
    Ip : 1 2 3 4 5 6 7 8 
    k = 3
    op: 3 2 1 6 5 4 8 7

    Rotate for each k
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

Node* KReverse(Node* head,int k){
    if(head==NULL){
        return NULL;
    }
    int cnt=1;
    
    Node* prev=NULL;
    Node* current=head;
    Node* temp;

    while(current!=NULL and cnt<=k){
        temp=current->next;  // Store
        current->next=prev; //update
        prev = current;
        current=temp;
        cnt++;
    }

    if(temp!=NULL){
        head->next=KReverse(temp,k);
    }

    return prev;
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
    print(head);
    cout<<endl;
    insertOnmiddle(head,99,3);
    print(head);

    cout<<endl;
    Node* krev=KReverse(head,3);
    print(krev);
}