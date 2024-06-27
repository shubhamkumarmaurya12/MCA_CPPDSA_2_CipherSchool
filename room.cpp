#include<bits/stdc++.h>
using namespace std;
 
 int main(){
   string str="Shubham kumar maurya";
    int n = str.length();
       int i=0;
        int j=n-1;
        while(j>i){
         swap(str[i],str[j]);
         i++;
         j--;
        }
    

    cout<<str;

   return 0;
 }