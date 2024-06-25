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

bool detectCycle(Node* head){
    Node* fast=head->next;
    Node* slow=head;

    while(fast and fast->next){
        if(slow==fast){
            return true; //detected cycle
        }
        fast=fast->next->next;
        slow=slow->next;
    }
    return false;
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

    cout<<detectCycle(head);
}