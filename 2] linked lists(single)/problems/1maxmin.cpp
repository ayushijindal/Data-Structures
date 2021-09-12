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

void linsert(int data)
{   Node*temp= new Node(data);
    if(head==NULL)
        head=temp;
    
    else
    {   Node*curr=head;
        while(curr->next!=NULL)
            curr=curr->next;

        curr->next=temp;
    }
    
}
void liprint()
{   if(head==NULL)
    {   cout<<"empty"<<endl;
        return;
    }

    else
    {   Node*curr=head;
        while(curr!=NULL)
        {   cout<<curr->data<<" ";
            curr=curr->next;
        }
    }cout<<endl;
}


void findminmax()
{   if(head==NULL)
        cout<<"empty"<<endl;

    int min=INT_MAX;
    int max=INT_MIN;

    if(head->next==NULL)
    {   min=head->data;
        max=head->data;
    }
    else 
    {   Node *curr=head;
        while(curr!=NULL)
        {   if(max<curr->data)
                max=curr->data;

            if(curr->data<min)
                min=curr->data;

           curr=curr->next; 
        }
    }
    cout<<"min: "<<min<<endl;
    cout<<"max: "<<max;

}


int main()
{   linsert(20);
    linsert(10);
    linsert(70);
    linsert(100);

    liprint();
    findminmax();

}