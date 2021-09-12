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

Node*head=NULL;

void linsert(int val)
{   Node*temp =new Node(val);
    if(head==NULL)
        head=temp;

    else
    {   Node*curr=head;
        while(curr->next!=NULL)
            curr=curr->next;
        curr->next=temp;
    }
}

void lprint(){
    if(head==NULL)
        cout<<"empty";
    else
    {   Node* curr=head;
        while(curr!=NULL)
        {   cout<<curr->data<<" ";
            curr=curr->next;
        }

    }
}

void reverse()
{   Node*curr=head;
    Node* prev=NULL;

    while(curr!= NULL)
    {   Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    cout<<"reversed list is:"<<endl;
    lprint();

}

int main()
{   linsert(10);
    linsert(20);
    linsert(30);

    lprint();
    reverse();
    lprint();
}