#include<bits/stdc++.h>
using namespace std;

void selectionsort(int arr[],int n){
    
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
 int arr[5] = {4,5,1,7,3};

 selectionsort(arr,5);
    return 0;
}