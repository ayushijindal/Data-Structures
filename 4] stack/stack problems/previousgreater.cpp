#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{   int arr[]={15,10,18,12,4,6,2,8};
    int n=8;
    stack<int>s;
    s.push(arr[0]);
    cout<<"-1"<<" ";

    for(int i=1; i<n; i++)
    {   while(s.empty()==false && s.top()<=arr[i])
            s.pop();

        if(s.empty()) cout<<"-1"<<" ";
        else cout<<s.top()<<" ";
        s.push(arr[i]);
    }
}