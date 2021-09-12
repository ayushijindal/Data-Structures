#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct twostack{
    int *arr;
    int cap;
    int top1,top2;

    twostack(int n)
    {   cap=n;
        arr=new int[n];
        top1=-1;
        top2=cap;
    }   


    void push1(int data)
    {   if(top1<(top2-1))   
        {   top1++;
            arr[top1]=data;
        }
    }

    void push2(int data)
    {   if(top1<(top2-1))   
        {   top2--;
            arr[top2]=data;
        }
    }

    int  pop1()
    {   if(top1>=0)
        {   int data=arr[top1];
            return data;
            top1--; 
        }else
            exit(1);
    }

    int pop2()
    {   if(top2<cap)
        {   int data=arr[top2];
            return data;
            top2++;   
        }
        else
            exit(1);
        
    }
};



int main(){
    twostack s(10);
    
    s.push1(10);
    s.push1(20);


    s.push2(50);
    s.push2(60);

    cout<<s.pop1()<<endl;
    cout<<s.pop2()<<endl;

}