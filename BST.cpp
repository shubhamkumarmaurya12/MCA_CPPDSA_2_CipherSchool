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

int Sum(Node *root){

    if(root==NULL){
        return 0;
    }
return root->data+Sum(root->left)+Sum(root->right);
}

int main(){
 Node *root = NULL;

 root=InserInBst(root,12);
 root=InserInBst(root,15);
 root=InserInBst(root,7);
 root=InserInBst(root,11);

print(root);
cout<<endl<<Search(root,15);
cout<<endl<<"Sum: "<<Sum(root)<<endl;

    return 0;
}