#include<bits/stdc++.h>
using namespace std;
bool pelindrom(string str){
 int n=str.length();

 int i=0;
 int j=n-1;
 while(j>=i){
     if(str[i]!=str[j]){
        return false;
     } else {
        i++; j--;
     }
 }
  
  return true;

}

int main(){
  string str;
  cout<<"Enter the string"<<endl;
  cin>>str;
 if(pelindrom(str)==true){
    cout<<"String is pelindrom"<<endl;
 } else {
    cout<<"Not a pelindrom"<<endl;
 }
    return 0;
}