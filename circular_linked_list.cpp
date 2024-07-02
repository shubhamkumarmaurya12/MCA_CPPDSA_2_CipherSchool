#include<bits/stdc++.h>
using namespace std;
 class Node{
public:
int data; Node *next;
Node(int d){
    data=d;
    next=NULL;
}

 };

 void Insert(Node* &head, int d){

    Node *newnode = new Node(d);
if(head==NULL){
    head=newnode;
    newnode->next=head;
    return;
} 
 Node *temp =head;
 while(temp->next!=head){
    temp=temp->next;

 }
 temp->next=newnode;
 newnode->next=head;
}


   

 void Display(Node *head){
    Node *temp = head;
do{
    cout<<temp->data<<" ";
    temp=temp->next;
} while(temp!=head);
 }

int main(){
Node *head = NULL;

Insert(head,5);
Insert(head,13);
Insert(head,9);
Insert(head,4);

Display(head);

    return 0;
}

