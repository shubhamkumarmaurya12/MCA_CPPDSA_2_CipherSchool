#include<bits/stdc++.h>
using namespace std;



void reverseSentence(string s)
{
    stack<string> st;
    for(int i=0;i<s.size();i++)
    {
        string word="";

        while(s[i]!=' ' && i <s.length() )
        {
            word=word+s[i];
            i++;
        }
        st.push(word);
    }
    
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main()
{
    reverseSentence("Hello World from Mars to SHUBHAM ");
    
}
