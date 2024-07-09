#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        data=d; next=NULL;
    }
};

class Stack{
public:
Node *top;
Stack(){
    top=NULL;
}

void push(int d){
     Node *temp = new Node(d);
     temp->next = top;
     top=temp;

}

void pop(){
    if(top==NULL){
        cout<<"Stack is underflow"<<endl;
    }

    Node *temp = top;
    top=top->next;
    delete temp;
}

int peek(){
    if(top==NULL){
        cout<<"Stack is empty"<<endl;
        return -1;
    }

    return top->data;
}

void display(){
    Node *temp = top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
};

int main(){
Stack s;
s.push(7);
s.push(8);
s.push(4);
s.push(5);
s.push(9);
s.push(11);

// cout<<s.peek()<<endl;
 s.pop();
// cout<<s.peek()<<endl;

s.display();
cout<<s.peek()<<endl;
    return 0;
}