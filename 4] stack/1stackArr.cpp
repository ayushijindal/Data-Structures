#include<iostream>
#include<bits/stdc++.h>

using namespace std;


 struct rstack{
    private:

    int *arr;
    int top;
    int cap;

    public:
    rstack(int n)
    {   cap=n;              //to keep record the size of array created
        arr=new int[n];
        top=-1;
    }

    int isEmpty() 
    {   if(top==-1) return 1;
        else return 0;
    }

    int isFull()
    {
        if(top==cap-1)  return 1;
        else    return 0;

    }

    void push(int val)
    {   if(isFull()) cout<<"Stack overflow";
        else
        {   top++;
            arr[top]=val;   
        }
    }


    int pop(){
        if(isEmpty()) cout<<"Stack underflow";
        else
        {   int val=arr[top];
            arr[top]=0;
            top--;
            return val;
        }
    }


    int peek() 
    {   if(isEmpty())
            cout<<"Stack is Empty";
        
        else 
            return arr[top];
    }

};



int main()
{
    rstack s(10);
    cout<<s.peek()<<endl;

    cout<<s.isEmpty()<<endl;
    cout<<s.isFull()<<endl;

    s.push(2);

    s.push(4);
    cout<<s.peek()<<endl;

    s.push(9);
    cout<<s.pop()<<endl;

}