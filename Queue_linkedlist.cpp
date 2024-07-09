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

class Queue{
    public:
    Node *front; Node *rare;
    Queue(){
        front=rare=NULL;
    }

    void push(int data){
        if(front==NULL) {
        front = new Node(data);
        rare=front;
        } else {
            rare->next = new Node(data);
            rare=rare->next;
        }
    }

    void pop(){
        if(front==NULL){
            cout<<"Queue is underflow"<<endl;
        }

        Node *temp = front;
        front=front->next;
        delete temp;
    }

    void display(){
        if(front==NULL){
            cout<<"Queue is empty"<<endl;
        }

        Node *temp = front;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};

int main(){
 Queue q;

 q.push(10);
 q.push(20);
 q.push(30);
 q.push(40);
 q.push(50);

 q.display();
 q.pop(); cout<<endl;
 q.display();
    return 0;
}
