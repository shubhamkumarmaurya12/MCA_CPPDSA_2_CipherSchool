//If we want to convert char into integer then subtract their value into 0
#include<stack>
#include<iostream>
#include<math.h>
using namespace std;

int prefixEval(string s)
{
    stack<int> st;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i] >='0' && s[i] <='9')
        {
            st.push(s[i]-'0');
        }
        else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();
            
            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            
            case '-':
                st.push(op1-op2);
                break;
            
            case '*':
                st.push(op1*op2);
                break;
            
            case '/':
                st.push(op1/op2);
                break;
            
            case '^':
                st.push(pow(op1,op2));
                break;
            
            default:
                cout<<"Invalid";
                break;
            }
        }
    } 
    return st.top();
}
int main()
{
    cout<<prefixEval("-+7*45+20");
}