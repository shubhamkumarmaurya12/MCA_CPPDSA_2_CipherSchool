#include<bits/stdc++.h>
using namespace std;

void pairsum(int arr[] , int n , int target){
    bool found =false;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==target){
                found=true;
                cout<<i<<" "<<j;
                break;
            }
        }
        
    }
   if(!found){
  cout<<"Indexes does not exist"<<endl;
   }
            
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   
   int target;
   cout<<"enter target value"<<endl;
   cin>>target;
    pairsum(arr,n,target);
    return 0;
}