#include<bits/stdc++.h>
using namespace std;

int main(){

   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     int gratest =arr[0];
    int gratest2 = -1;
     for(int i=0; i<n; i++){
        if(arr[i]>gratest){ 
            gratest=arr[i];
        }
     }
    
    
    for(int i=0; i<n; i++){
        if(arr[i]>gratest2 && arr[i]!=gratest){
          
            gratest2=arr[i];
        }
    }

    cout<<gratest2<<endl;
    
    
    return 0;
}
