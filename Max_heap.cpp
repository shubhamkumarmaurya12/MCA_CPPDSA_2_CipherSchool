#include<bits/stdc++.h>
using namespace std;
/*
Heap is a complete binary tree that comes wuth a heap property (Max heap/Min heap)
Every level is completely filled except last level in which the nodes are added from left

left chile -> [ 2 * i + 1];     right child -> [ 2 * i + 2 ];      parent of any node -> [ i -1 / 2 ]; 


  Deletion 
     1) Copy the last node to the root node
     2) Decrease the size (size--)
     3) Check whether the replaced node is greater thn their child nodes or not,
        if not then swap with the greatest child
        * Use 2*i to go to the left child and 2*i+1 to go to the right child

*/


// Time complexity =>        insertion -> n log n                  Deletion -> log n

class Heap {
public:
int *arr;
int size;
int Heap_size;
Heap(int s){
  Heap_size=s;
  arr = new int[s];
  size = 0;
  
}

void insert(int d){
  if(size==Heap_size){
    cout<<"heap is overflow"<<endl;
    return;
  }

  arr[size] = d;
  int index = size;
  size++;

  while(index > 0 && arr[(index-1)/2]<arr[index]){
    swap(arr[(index-1)/2],arr[index]);
    index = (index-1)/2;
  }

}

void print(){
for(int i=0; i<size; i++){
  cout<<arr[i]<<" ";
}

}

void Heapify(int index){
  int largest = index;
  int left = (2*index)+1;
  int right = (2*index)+2;

  if(left<size && arr[left]>arr[largest]){
    largest = left;
  }

   if(right<size && arr[right]>arr[largest]){
    largest = right;
  }

  if(largest!=index){
    swap(arr[largest],arr[index]);
    Heapify(largest);
  }

}


void Delete(){
  if(size==0){
    cout<<"Heap is underflow"<<endl;
    return;
  }

  arr[0] = arr[size-1];
  size--;

  Heapify(0);
}
};

int main(){
Heap h(7);

h.insert(7);
h.insert(8);
h.insert(15);
h.insert(13);
h.insert(9);
h.insert(11);

h.print();cout<<endl;
h.Delete();
h.print();


    return 0;
}