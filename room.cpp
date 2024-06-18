#include<bits/stdc++.h>
using namespace std;

int main(){
    string name = "Shubham";
    int start=0; int end=name.size()-1;
    while(start<end){
        if(name[start]!=name[end]){
            cout<<"Not a pallindrom"<<endl;
            return 0;
        }
        start++; end--;
    }

    cout<<"it's a pallindrom"<<endl;
    return 0;
}