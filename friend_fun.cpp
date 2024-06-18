#include<bits/stdc++.h>
using namespace std;

 template<class T, class U>
 class Add{
    public:
    T x; U y;
   Add(T a,U b){
    x=a; y=b;
   }

   void show(){
    cout<<"Sum is: "<<x+y<<endl;
   }
 };

 int main(){
    Add<int,float> obj(20,42.10);
    obj.show();
    return 0;
 }