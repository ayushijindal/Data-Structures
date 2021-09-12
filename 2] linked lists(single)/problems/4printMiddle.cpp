#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{   int data;
    Node* next;

    Node(int val)
    {   data=val;
        next=NULL;
    }
    
};
Node* head;

void insertlist(int val)
{   Node* temp=new Node(val);
    Node*curr=head;
    if(curr==NULL)
    {
        head=temp;
        return;       
    }

    while (curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
}

void printlist()
{   Node* curr=head;
    while(curr!=NULL)
    {   cout<<curr->data<<" ";
        curr=curr->next;
    }
}


int printmiddle()
{   Node*slow=head;
    Node*fast=head;

    while(fast!=NULL && fast->next!=NULL)
    {   slow=slow->next;
        fast=fast->next->next;
    }
    return slow->data;
}



int main(){
    head=NULL;
    insertlist(10);
    insertlist(20);
    insertlist(30);
    printlist();
    
    cout<<"the middle is: "<<printmiddle();



}