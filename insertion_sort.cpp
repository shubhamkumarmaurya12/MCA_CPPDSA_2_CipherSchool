#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[],int n){
   for(int i=0; i<n; i++){

    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j-1],arr[j]);
        j--;
    }
   } 
   
   for(int i=0; i<n; i++){
    cout<<arr[i]<<" "; 
   }
}

int main(){
 int arr[5] = {4,5,1,7,3};

 insertionsort(arr,5);
    return 0;
}