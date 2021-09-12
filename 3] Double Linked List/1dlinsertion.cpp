#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{   int data;
    Node* next;
    Node* prev;
    Node(int val)
    {   data=val;
        next=NULL;
        prev=NULL;
    }
    
};


Node*head=NULL;

void dlinsertion(int val)
{   Node*temp=new Node(val);
    if(head==NULL)
    {    head=temp;
         return;
    }

    else 
    {   Node*curr=head;
        while(curr->next!=NULL)
            curr=curr->next;
        curr->next=temp;
        temp->prev=curr;
    }
}

void hinsertion(int data)
{   Node* temp=new Node(data);
    temp->next=head;
    if(head!=NULL)
    {
        head->prev=temp;
    }
    head=temp;
}

void dlprint()
{   if(head==NULL)
    {   cout<<"Empty"<<endl;
        return;
    }

    else
    {   Node* curr=head;

        while(curr!=NULL)
        {   cout<<curr->data<<" ";
            curr=curr->next;
        }
    }cout<<endl;

}


int main()
{   dlinsertion(10);
    dlinsertion(20);
    dlprint();
    hinsertion(50);
    dlprint();

}


