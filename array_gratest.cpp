#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[5] = {23,43,12,56,11};
    int n=5;
     int gratest =arr[0];

     for(int i=0; i<n; i++){
        for(int j=i; j<n-1; j++){
            if(arr[j]>gratest){
                gratest=arr[j];
               
            } 
        }
     }
     cout<<"Gratest element is :"<<gratest;
    
    return 0;
}
