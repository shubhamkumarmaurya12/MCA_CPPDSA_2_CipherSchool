#include<bits/stdc++.h>
using namespace std;

void Sort(int arr[], int n){
 
   for(int i=0; i<n-1; i++){
      int min = i;
      for(int j=i+1; j<n; j++){
         if(arr[min]>arr[j]){
            min=j;
         }
      }
      swap(arr[i],arr[min]);
   }
for(int i=0; i<n; i++){
   cout<<arr[i]<<" ";
}
}

int main(){

  int arr[] = {8,7,2,4,9};
  Sort(arr,5);

   return 0;
}