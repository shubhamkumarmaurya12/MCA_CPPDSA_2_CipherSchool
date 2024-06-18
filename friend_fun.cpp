#include<bits/stdc++.h>
using namespace std;

  int main(){
   string str = "shubham kumar maurys";
   int start=0;   int end=str.size()-1;

   while(start<end){
      swap(str[start],str[end]);
     start++; end--;
   }
   cout<<str;
   return 0;
  }