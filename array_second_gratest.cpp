#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[5] = {56,43,12,56,11};
    int n=5;
     int gratest =arr[0];
     int gratest2 = -1;
     for(int i=0; i<n; i++){
        if(arr[i]>gratest){
            gratest=arr[i];
        }
     }
    cout<<" first Gratest "<<gratest<<endl;

    for(int i=0; i<n; i++){
        if(arr[i]>gratest2 && arr[i]!=gratest){
            gratest2=arr[i];
        }
    }

    cout<<"Second gratest : "<<gratest2<<endl;
    return 0;
}
