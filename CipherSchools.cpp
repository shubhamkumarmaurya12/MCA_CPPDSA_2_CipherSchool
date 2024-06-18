/*
    pollymorphism
   >>   when same entity behave different in different situation that is calld polymorphism
*/
#include<bits/stdc++.h>
using namespace std;
class Base {
    public:
  virtual  void show(){
    cout<<"this is base class"<<endl;
    }
};

class Derived : public Base{
    public:
   void show(){
    cout<<"this is derived class"<<endl;
   }
};
int main() 
{
    Derived d;

    Base *ptr = &d;
    ptr->show();
    
    return 0;
}