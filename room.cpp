#include<bits/stdc++.h>
using namespace std;

void Reverse(int arr[] , int n){
  int start=0;
  int end = n-1;

    while(start<end){
    swap(arr[start],arr[end]);
    start++; end--;
  }

  for(int i=0; i<n; i++){
  cout<<arr[i]<<" ";
  }
}
int main(){
int arr[7] = {12,10,13,9,15,5,2};

Reverse(arr,7);
  return 0;
}