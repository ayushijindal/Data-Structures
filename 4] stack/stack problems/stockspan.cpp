#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main()
{   int arr[]={30,20,25,28,27,29};
    stack<int>s;

    int size=6;
    s.push(0);
    cout<<"1"<<" ";
    for(int i=1; i<size; i++)
    {   while (s.empty()==false && arr[s.top()]<=arr[i])
            s.pop();

        if(s.empty())
            cout<<i+1<<" ";
        else
            cout<<i-s.top()<<" ";
        s.push(i);
    }
    
    

}