 #include<bits/stdc++.h>
 using namespace std;


 int arraysum(int arr[] , int n){
 
 if(n==1){
    return arr[0];
 }

 if(n==0){
    return 0;
 }

 

  return arr[0] + arraysum(arr+1, n-1);

}

 

 int main(){

int arr[7] = {1,2,3,4,5,6,7};
cout<<arraysum(arr,7);
    return 0;
 }