#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int x){
        data=x;
        next=NULL;
    }
};

int search(Node *counter,int target)
{  int count=1;
    while (counter!=NULL)
    {
        if(counter->data==target)
            return count;
        
        counter=counter->next;
        count++;        // mark the current position 
    }return -1;
    
}
 int rsearch(Node *counter,int target){
    if(counter==NULL)   return -1;

    if(counter->data==target)    return 1;
    else
    {
        int index=rsearch(counter->next, target);
        if(index==-1)   return-1;
        else return(index+1);
    }
 }

int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    int index=search(head,20);
    cout<<index<<endl;
    int val =rsearch(head,20);
    cout<<val<<endl;
}