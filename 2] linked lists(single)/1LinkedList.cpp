#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node * next;

    Node(int x)
    {
        data=x;
        next=NULL;
    }
};


int  main()
{
    Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);

    head->next=temp1;
    temp1->next=temp2;

    cout<<"first value:"<<head->data<<endl;
    cout<<"second value:"<<head->next->data<<endl;
    cout<<"third value:"<<temp2->data<<endl;
    
}