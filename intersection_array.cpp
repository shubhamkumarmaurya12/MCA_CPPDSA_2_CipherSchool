#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;

    cout<<"Enter the size of first array"<<endl;
    cin>>n1;

    int arr1[n1];
    cout<<"Enter the element in first array"<<endl;

    for(int i=0; i<n1; i++){
        cin>>arr1[i];
    }
   
   cout<<"Enter the size of second array"<<endl;
   cin>>n2;

   int arr2[n2];
   cout<<"Enter the element in second array"<<endl;

   for(int i=0; i<n2; i++){
    cin>>arr2[i];
   }

   cout<<"common element are"<<endl;
   for(int i=0; i<n1; i++){
    for(int j=0; j<n2; j++){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            break;
        }
        
    }
   }
    return 0;
}