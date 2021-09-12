#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool matching(char close, char stack){
    return ((close==')' && stack=='(')|| (close=='}' && stack=='{') || (close==']' && stack=='['));
}

bool balanced(string str)
{   stack<int>s;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='('|| str[i]=='{' || str[i]=='[')
            s.push(str[i]);
        else 
        {   if(s.empty()==true)
                return false;
        else if(matching(str[i],s.top())==false)
                return false;
        else
            s.pop();
        }
    }
    if(s.empty()==true)
        return true;
}

int main()
{   string str;
    cin>>str;
    bool res=balanced(str);
    cout<<res<<endl;
}