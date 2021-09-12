#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct vstack
{
    vector<int>v;
    void push(int data)
    {
        v.push_back(data);
    }

    int pop()
    {
        int data=v.back();
        v.pop_back();
        return data;
    }

    int size()
    {
        return v.size();
    }

    bool isEmpty()
    {
        return v.empty();
    }
};

int main(){
    vstack s;
    
    s.push(2);
    s.push(3);
    s.push(4);
    
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;

}