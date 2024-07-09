#include<bits/stdc++.h>
using namespace std;

class Queue{
public:
int front; int rare;
int *arr;
int size;
Queue(int s){
    size=s;
    arr=new int[size];
    front=rare=-1;
}

void push(int d){
    if(rare==size-1){
         cout<<"Queue is overflow"<<endl;
    }
     rare++;
     arr[rare] = d;

     if(front==-1){
        front++;
     }
}

void pop(){
    if(front==-1 || front>rare){
        cout<<"Queue is overflow"<<endl;
    }

    front++;
}

int peek(){
    if(front==-1){
        cout<<"Queue is empty"<<endl; return 0;
    }
     else {
        return arr[front];
     }
}

void display(){
    if(front==-1){
        cout<<"Queue is empty"<<endl;
    }

    for(int i=front; i<=rare; i++){
        cout<<arr[i]<<" ";
    }
}
};

int main(){
    Queue q(4);
 
    q.push(5);
    q.push(8);
    q.push(4);
    q.push(3);
   
   q.display();

    cout<<endl<<q.peek();
    return 0;
}