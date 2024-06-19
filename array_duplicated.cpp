#include<bits/stdc++.h>
using namespace std;
 void findduplicate(int arr[] , int n){
    bool found=false;
     for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                cout<<"duplicate find"<<" "<<arr[i]<<endl;
                found=true;
                
            }
            break;
        }
     }
     if(!found){
     cout<<"duplicate not find"<<endl;
     }
 }

int main(){
    int arr[5] = {12,35,35,54,35};
     
     findduplicate(arr,5);
    return 0;
}