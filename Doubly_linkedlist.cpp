#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next,*prev;
    Node(int d){
        data=d;
        next=prev=NULL;
    }
};

void Insert(Node* &head, int d){
    if(head==NULL){
        head=new Node(d);
    }
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head=temp;
}

void Display(Node *head){
    Node  *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){

Node *head = NULL;

Insert(head,7);
Insert(head,32);
Insert(head,18);
Insert(head,17);
Insert(head,9);

Display(head);
    return 0;
}