#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void traversal (Node *counter)
{   
    while (counter!=NULL)
    {
        cout<<counter->data<<" ";
        counter=counter->next;
    }
    
}


void recursivetraversal(Node *counter)
{
    if(counter==NULL)   return;
    cout<<counter->data<<" ";
    recursivetraversal(counter->next);
}


int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    
    traversal(head);
    recursivetraversal(head);
}

