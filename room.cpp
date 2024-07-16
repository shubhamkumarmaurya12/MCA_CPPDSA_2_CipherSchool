#include<bits/stdc++.h>
using namespace std;

void add1(int &a){
  ++a;
}
int main(){
  int a=10;
 int *aptr=&a;
 add1(*aptr);
 cout<<a<<endl;;
  return 0;
}