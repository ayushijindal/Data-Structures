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

Node* linsert(int data, Node*head)
{   Node*temp=new Node(data);
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


void lprint(Node*head)
{   if(head==NULL)
    {   cout<<"Empty"<<endl;
        return;
    }

    else
    {   Node*curr=head;
        while(curr!=NULL)
        {   cout<<curr->data<<" ";
            curr=curr->next;
        }cout<<endl;
    }

}


Node* removedup(Node*head)
{   if(head==NULL || head->next==NULL)
    {
        return head;
    }
    else
    {   Node* curr=head;
        while(curr!=NULL && curr->next!=NULL)
        {   if(curr->data!= curr->next->data)
                curr=curr->next;

            else if(curr->data == curr->next->data)
            {   Node*temp=curr->next;
                curr->next=curr->next->next;
                delete(temp);
            }
        }
        
        return head;
    }

}

int main()
{   Node*head=NULL;
    head=linsert(10,head);
    head=linsert(20,head);
    head=linsert(20,head);
    head=linsert(20,head);
    head=linsert(30,head);
    head=linsert(40,head);


    lprint(head);
    head=removedup(head);
    lprint(head);

}



