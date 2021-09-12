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


void dladd(int data)
{   Node*temp=new Node(data);
    if(head==NULL)
    {   head=temp;
        return;
    }
    else{
        Node* curr=head;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=temp;
        temp->prev=curr;
        
    }

}



void delhead()
{   
    if(head==NULL||head->next==NULL)
    {   delete head;
        cout<<"Empty"<<endl;
        return;
    }

    Node *curr=head;
    head=head->next;
    head->prev=NULL;
    delete curr;

}

void dlprint()
{  
    Node*curr=head;
    while (curr!=NULL)
    {   cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}



int main()
{   dladd(10);
    dladd(20);
    dladd(30);
    dladd(40);
    dladd(50);
    dlprint();
    cout<<head->data<<" "<<endl;
    delhead();
    dlprint();
   
}