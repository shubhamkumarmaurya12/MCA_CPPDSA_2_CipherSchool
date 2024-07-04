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

void Insert(Node* &head , Node* &tail , int d){
  if(head==NULL){
    head=new Node(d);
    tail=head;
  } else {
    Node *temp = new Node(d);
   tail->next=temp;
   temp->prev=tail;
   tail=temp; 
  }
}

void Display(Node *head){
  if(head==NULL) {return;}
  Node *temp = head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}

void Displayoddposition(Node *head){
  Node *temp = head;
  int pos = 1;
  while(temp!=NULL){
    if(pos % 2 != 0){
      cout<<temp->data<<" ";
    }
    temp=temp->next;
    pos++;
  }
}

void Delete(Node* &head,int pos){
  if(pos==1){
  Node *temp = head;
  head=head->next;
  delete temp;
  }
  pos--;
  Node *curr = head;
  Node *prev = NULL;
  while(pos--){
   prev=curr;
   curr=curr->next;
  }
  prev->next=curr->next;
  delete curr;
}

void InsertAtAnyPosition(Node *head,int pos , int d){

pos--;
Node *temp = head;
while(pos--){
temp=temp->next;
}
Node *temp2 = new Node(d);

temp2->next = temp->next;
temp->next=temp2;

}
 

 int main(){
  Node *head = NULL; Node *tail = NULL;

  Insert(head,tail,12);
    Insert(head,tail,18);
      Insert(head,tail,13);
        Insert(head,tail,17);
          Insert(head,tail,14);
         // Delete(head,5);

         InsertAtAnyPosition(head,4 ,20);
         Display(head);
       //  Displayoddposition(head);
         
  return 0;
 }