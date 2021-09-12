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


Node*head1=NULL;
Node*head2=NULL;

Node* liadd(int val,Node*head)
{   Node*temp=new Node(val);
    if(head==NULL)
        return temp;
    else
    {   Node*curr=head;
        while(curr->next!=NULL)
            curr=curr->next;
        curr->next=temp;
        return head;
    }
}


Node*  joinlist(Node*head1,Node*head2)
{   Node*h1=head1;
    Node*h2=head2;
  
    while(h1!=NULL){
        h1=h1->next;
    }
    h1->next=h2;
    return head1;
}

void liprint(Node*head)
{   Node*curr=head;
    if(curr==NULL)
    {   cout<<"0";
        return;
    }
    while(curr!=NULL)
    {   cout<<curr->data<<" ";
        curr=curr->next;
    }
}


int main()
{   head1=liadd(10,head1);
    head1=liadd(20,head1);
    head1=liadd(30,head1);

    head2=liadd(40,head2);
    head2=liadd(50,head2);  

    liprint(head1);
    
    head1=joinlist(head1,head2);
    liprint(head1);
}