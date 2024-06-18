#include<bits/stdc++.h>
using namespace std;

class Distance{
    private:
    int x;

    friend int increasedistance(Distance);
    public:
    Distance(){
        x=10;
    }
};

int increasedistance(Distance d){
    d.x+=10;
    return d.x;
}
int main(){
  Distance obj;
  cout<<increasedistance(obj);
    return 0;
}