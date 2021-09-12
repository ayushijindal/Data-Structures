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


struct  listack
{   
    Node *head;
    int size;

    listack()
    {   head=NULL;
        int size=0;
    }

    void push(int data)
    {   Node* temp=new Node(data);
        temp->next=head;
        head=temp;
        size++;
    }

    int pop()
    {   if(head==NULL)
        {   cout<<"Stack is empty";
            return 0;
        }
        int val=head->data;
        Node *temp=head;
        head=head->next;
        delete(temp);
        size--;
        return val;
    }

    int stack_size(){ return size;}

    bool isEmpty(){return (head==NULL);}

    int peek()
    {   if(head==NULL) return INT_MAX;
        return head->data;
    }
};

int main(){
    listack s=listack();
    s.push(10);
    s.push(20);
    cout<<s.pop()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.peek()<<endl;
}
