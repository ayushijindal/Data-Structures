#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{   int arr[]={5,15,10,8,6,12,9,18};
    int n=8;
    stack<int>s;
    s.push(arr[n-1]);
    cout<<"-1" <<" ";
    for(int i=n-2; i>=0; i--)
    //keeping the greatest element in the stack
    {   while(s.empty()==false && s.top()<=arr[i])
            s.pop();
        if(s.empty())   cout<<-1<<" ";
        else    cout<< s.top()<<" ";
        s.push(arr[i]);
    }

}