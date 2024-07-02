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

// Searching a specific element
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

void reverse(Node* &head){
Node* prev = NULL;
Node* curr = head;
Node* next;
  while(curr!=NULL){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
  }
  head=prev;
}

// Insert At Any Position
void InsertATAny(Node* &head,int data, int pos){
pos--;
Node *temp = head;
while(pos--){
temp=temp->next;
}

Node *temp2 = new Node(data);
temp2->next = temp->next;
temp->next=temp2;

}

//Delete first element
void Delete(Node* &head){
  if(head==NULL){
    return;
  }

  Node *temp = head;
  head=head->next;
  delete temp;
}

// Delete last element
void Delete2(Node* &head){
  Node *temp = head;
  if(temp->next==NULL){
      delete temp;
      head=NULL;
  }

  Node *curr = head;
  Node *prev = NULL;
  while(curr->next!=NULL){
    prev=curr;
    curr=curr->next;
  }
  prev->next=curr->next;
  delete curr;
}

int main(){

  Node *head = NULL; Node *tail = NULL;
 
InsertAtTail(head,tail,1); 
InsertAtTail(head,tail,21); 
InsertAtTail(head,tail,9); 
InsertAtTail(head,tail,6); 

//print(head);
 
// cout<<Search(head,21);

//reverse(head);

//InsertATAny(head,20,3);
Delete(head);
Delete2(head);
print(head);
    return 0;
}