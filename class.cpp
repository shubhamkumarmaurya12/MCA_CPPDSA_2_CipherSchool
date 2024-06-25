 #include<bits/stdc++.h>
 using namespace std;

int Binarysearch(int arr[] , int n, int key){
int start = 0;
int end = n-1;
int mid = (start+end)/2;

 while(start<=end){
    if(arr[mid]==key){
        return mid;
    } else if(arr[mid]<key){
        start=mid+1;
    } else {
        end=mid-1;
    }
    mid=(start+end)/2;
 }

 return -1;

} 

 int main(){

 int arr[5] = {12,3,5,10,9};

 cout<<Binarysearch(arr,5,10)<<endl;
    return 0;
 }