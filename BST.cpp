  


#include<bits/stdc++.h>

using namespace std;

class Node{
public:
int data; Node *left ; Node *right;
Node(int d){
    data=d;
    left=right=NULL;
}
};

Node *InserInBst(Node * root, int d){
if(root==NULL){
    Node *temp=new Node(d);
    return temp;
} 

if(root->data>d){
    root->left = InserInBst(root->left,d);
} else {
    root->right = InserInBst(root->right,d);
}
  return root;

}

void print(Node *root){
    if(root==NULL){
        return;
    } else {
        
        print(root->left);
        cout<<root->data<<" ";
        print(root->right);

    }
}

bool Search(Node *root, int key){
  if(root==NULL){
    return 0;
  }
  if(key==root->data){
    return 1;
  }
  if(key<root->data){
    return Search(root->left,key); 
  } else {
    return Search(root->right,key);
  } 

}



int HeightOfTree(Node *root) {
    if (root == NULL) {
        return 0;
    }
    int leftHeight = HeightOfTree(root->left);
    int rightHeight = HeightOfTree(root->right);
    return max(leftHeight, rightHeight) + 1;
}


int SumOfBst(Node *root){ 

    if(root==NULL){
        return 0;
    }
return root->data+SumOfBst(root->left)+SumOfBst(root->right);
}

void minvalue(Node *root){
  if(root==NULL){
    return;
  }
  Node *temp = root;
  while(temp->left!=NULL){
    temp=temp->left;
  }   
    cout<< temp->data;
}

int main(){
 Node *root = NULL;

 root=InserInBst(root,12);
 root=InserInBst(root,15);
 root=InserInBst(root,7);
 root=InserInBst(root,11);
 root=InserInBst(root,17);
 root=InserInBst(root,6);
 root=InserInBst(root,9);
 
//  print(root);
//  cout<<endl<<Search(root,15);
// cout<<endl<<"Sum:  "<<Sum(root)<<endl;

  

//cout<<endl<<HeightOfTree(root);

minvalue(root);

    return 0;
}