#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int n){
    for(int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]); 
            }
        }
    }

 for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
 }

}

int main(){
 int arr[5] = {4,5,1,7,3};

 bubblesort(arr,5);
    return 0;
}