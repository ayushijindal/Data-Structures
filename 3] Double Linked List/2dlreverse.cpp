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

void dlinsertion(int data)
{   Node*temp=new Node(data);
    if(head==NULL)
    {
        head=temp;
        return;
    }
    else{   Node*curr=head;
        while(curr->next!=NULL)
        {   
            curr=curr->next;
        }

        curr->next=temp;
        temp->prev=curr;
    }
}

void dlreverse()
{   Node*temp=NULL;
    Node*curr=head;
    while (curr!=NULL)
    {   temp=curr->prev;
        curr->prev=curr->next;
        curr->next=temp;
        curr=curr->prev;
    }
    head=temp->prev;
}


void dlprint()
{   Node *curr=head;
    while(curr!=NULL)
    {   cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}


int main()
{   dlinsertion(10);
    dlinsertion(20);
    dlinsertion(30);
    dlinsertion(40);
    dlinsertion(50);

    dlprint();
    dlreverse();
    dlprint();

}