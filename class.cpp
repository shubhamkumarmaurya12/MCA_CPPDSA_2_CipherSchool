#include<bits/stdc++.h>
using namespace std;

// bool Search(int arr[] , int size , int key){
//      for(int i=0; i<size; i++){
//         if(arr[i]==key){
//             return i;
//         }  
//      }
//      cout<<"Not present"<<endl;
//      return false;
// }

// int main(){
  
//   int n;
//   cout<<"Enter the size of array"<<endl;
//   cin>>n;

//   int arr[n];
//   cout<<"Enter the element inside array"<<endl;
//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }
 
//   int key;
//   cout<<"Enter the key which you want to search inside array"<<endl;
//   cin>>key;

//   cout<<Search(arr,n,key);
//     return 0;
// }

int main(){
    int arr[8] = {10,20,30,40,50,60,70,80};
     
     int start =0; int end =start+1;
    while(end<8){
        swap(arr[start],arr[end]);
        start+=2; end+=2;
    }

    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

 