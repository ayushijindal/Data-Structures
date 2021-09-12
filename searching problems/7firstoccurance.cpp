#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find_first_occur(int arr[] , int n)
{
    int start=0;
    int end=n-1;
    int ans =-1;
    while(start<=end)
    {
        int mid=(end+start)/2;

        if(arr[mid] == 0)
            start=mid+1;
        
        else if(arr[mid] == 1)
        {
            ans=mid;
            end=mid-1;
        }
        


    }return ans;
}


int main(){
    int arr[]={0,0,0,0,0,1,1};
    int n=7;
    int first=find_first_occur(arr,  n);
    cout<<first;
}