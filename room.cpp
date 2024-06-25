#include<bits/stdc++.h>
using namespace std;

 void Duplicate(int arr[], int n){
 bool d =false;
 
 for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
        if(arr[i]==arr[j]){
            d=true;
            cout<<"Duplicate value is : "<<arr[i]<<endl;
            break;
        }
    }
 }
 if(!d){
    cout<<"Duplicate value not found"<<endl;
 }

 }

 int main() {
 
 int n;
 cout<<"Enter the size of array"<<endl;
 cin>>n;

 int arr[n];

 cout<<"Enter element"<<endl;
 for(int i=0; i<n; i++){
    cin>>arr[i];
 }

 Duplicate(arr,n);

    return 0;
 }