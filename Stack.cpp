#include<bits/stdc++.h>
using namespace std;

class Mystack{
    public:
    int size;
    int *arr;
    int top;
    Mystack(int s){
        size=s;
        arr=new int[size];
        top=-1;
    }

    void push(int d){
        if(top==size-1){
            cout<<"Stack is overflow "<<endl;
        } else {
          top++;
          arr[top]=d;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"Stack is underflow "<<endl;
        } else {
            top--;
        }
    }

    int peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return 0;
        }else {
            return arr[top];
        }
    }

    void display(){
       if(top==-1){
        cout<<"Stack is empty"<<endl;
       }

       for(int i=top; i>=0; i--){
        cout<<arr[i]<<" ";
       }
    }
};

int main(){
   
   Mystack s(4);

   s.push(10);
   s.push(15);
   s.push(20);

//    cout<<s.peek()<<endl;
//    s.pop();
//    cout<<s.peek()<<endl;

s.display();


    return 0;
}