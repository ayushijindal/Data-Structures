#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

Node * insBegin(Node *head, int val){
    Node* temp=new Node(val);
    temp->next=head;
    return temp;
};

int main()
{   Node *head=NULL;
    head=insBegin(head,10);
    head=insBegin(head,20);
    cout<<head->data;
    

}