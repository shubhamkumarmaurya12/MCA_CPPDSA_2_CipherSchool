 #include<bits/stdc++.h>
 using namespace std;
 class Node {
 public:
 int data;
 Node *next;
 Node(int d){
    data=d;
    next=NULL;
 }



 };

 void InsertAtTail(Node* &head,Node* &tail, int d){
  if(head==NULL){
    head=new Node(d);
    tail=head;
  } else {

    tail->next = new Node(d);
   tail=tail->next;
  }

 
 }

void print(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

bool Search(Node *head,int key){
  Node *temp = head;
  while(temp!=NULL){
      if(temp->data==key){
    return true;   
  }
  temp=temp->next;

  }  
  return false;
}


int main(){

  Node *head = NULL; Node *tail = NULL;
 
InsertAtTail(head,tail,1); 
InsertAtTail(head,tail,21); 
InsertAtTail(head,tail,9); 
InsertAtTail(head,tail,6); 

print(head);
//cout<<Search(head,21);
    return 0;
}