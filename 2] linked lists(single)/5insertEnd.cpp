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

Node * insertEnd(Node* head , int val)
{   Node* temp=new Node(val);

// temp is returned as it is the only node in the list also use head 
// by first pointing head=temp

    if(head== NULL)
       return temp;             

    Node *curr=head;            // created cause we want to point the position where
    while(curr->next != NULL)   //node->next=NULL
    {
        curr=curr->next;
    }
    curr->next=temp;            //cannot return curr->next as it is points where node->next=NULL
    return head;                //need to return head
   
}

int main()
{
    Node *head=NULL;

    head=insertEnd(head,60);
    head=insertEnd(head,70);
    head=insertEnd(head,80);
    cout<<head->data<<" ";

}