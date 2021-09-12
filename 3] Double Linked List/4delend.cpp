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

void linsert(int data)
{   Node*temp= new Node(data);

    if(head==NULL)
    {   head=temp;
        return;
    }

    else
    {   Node*curr=head;
        while (curr->next!=NULL)
        {   
            curr=curr->next;
        }
        curr->next=temp;
        temp->prev=curr;
    }
}

void delend()
{   if(head==NULL|| head->next==NULL)
    {   cout<<"empty";
        delete head;
        return;
    }

    Node*curr = head;
    while (curr->next!=NULL)
    {    curr=curr->next;
    }
    
    curr->prev->next=NULL;
    delete curr;
    
}

void dlprint()
{   if(head==NULL)
    {   cout<<"empty";
        return;
    }

    Node*curr=head;
    while (curr!=NULL)
    {   cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

int main()
{   linsert(10);
    linsert(20);
    linsert(30);
    linsert(40);
    
    dlprint();
  
    delend();
    dlprint();
   


}