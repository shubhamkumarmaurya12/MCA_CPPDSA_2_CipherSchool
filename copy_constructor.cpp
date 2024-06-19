#include<bits/stdc++.h>
using namespace std;
                           // Example of copy constructor
class student{
   public:
   string name; int age;
   student(string n , int a){
    name=n; age=a;
    cout<<"parameterised constructor is callaed"<<endl;
   }

   void show(){
    cout<<name<<" "<<age<<endl;
   }

   student(student &c){
    name=c.name;
    age=c.age;
    cout<<"Copy constructor is called"<<endl;
   }
 

};

int main(){
   
   student s("Dolly",22);
   student s2(s);

   s.show();
   s2.show();
    return 0;
}