 #include<bits/stdc++.h>
 using namespace std;

void arraysum(int arr[3][3] , int row , int col){ 
  
 for(int j=0; j<col; j++){
  if(j%2==1){
    for(int i=row-1; i>0; i-- ){
      cout<<arr[i][j]<<" ";
    }
  } else {
    for(int i=0; i<row; i++){
      cout<<arr[i][j]<< " ";
    }
  }
 }

 }

int main(){
 
 int arr[3][3]={1,2,3,4,5,6,10,20,30};

  arraysum(arr,3,3);
   
 
 return 0;
}