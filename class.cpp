 #include<bits/stdc++.h>
 using namespace std;

int main(){
 
 string str = "Ram is a good boy";

  string result;
  for(int i=0; i<str.length(); i++){
    if(str[i]==' '){
        result+="@9"; 
    } else {
        result+=str[i];
    }
  }
  cout<<result;
 return 0;
}