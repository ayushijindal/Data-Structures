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

Node *sortedIns(Node* head,int val)
{   Node* temp=new Node(val);
    if(head==NULL)
    {
        return temp;
    }
    if(val<head->data)
    {
        temp->next=head;
        return temp;
    }

    Node* curr=head;
    while(curr != NULL &&curr->next->data<temp->data)
    {
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
   
}
int main(){

}