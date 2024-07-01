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

 void InsertAtTail(Node* &head , int d){
  
Node *newNode = new Node(d);
if(head==NULL){
    head=newNode;
    return ;
}

Node *temp = head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=newNode;
 
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

  Node *head = NULL;
 
InsertAtTail(head,1); 
InsertAtTail(head,21); 
InsertAtTail(head,9); 
InsertAtTail(head,6); 

print(head);
cout<<Search(head,21);
    return 0;
}