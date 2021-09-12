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

Node*head=NULL;

void insertlist(int val)
{   Node*temp=new Node(val);
    if(head==NULL)
        head=temp;

    else
    {   Node*curr=head;
        while(curr->next!=NULL)
            curr=curr->next;
        curr->next=temp;
    }
}


void search(int pos)
{   Node*curr=head;
    for(int i=0; i<=pos-2; i++)
        curr=curr->next;
    cout<<curr->data<<endl;
}

int  elesearch(int target)
{   Node*curr=head;
    int count=1;
    while(curr!=NULL)
    {   if(curr->data==target)
        {   return count;}

        count++;
        curr=curr->next;
    }return -1;
    

}

int main()
{   insertlist(10);
    insertlist(20);
    insertlist(50);
    insertlist(30);
    insertlist(80);

    search(2);
    int pos=elesearch(80);
    cout<<pos<<endl;
}