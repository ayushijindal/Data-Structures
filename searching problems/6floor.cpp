#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findfloor(int arr[], int n, int target, bool isfloor){
    int start=0; 
    int end= n-1;
    int ans=-1;
    while(start<=end)
    {
        int mid=(start+end)/2;

        if(arr[mid]==target)
            return arr[mid];

        else if(arr[mid]>target)
            end=mid-1;
        else
            start=mid+1;
        
    }   
    if(isfloor)
        return arr[end];
    else 
        return arr[start];
}

int main(){
    int arr[]={1, 4, 6, 8, 9};
    int x=3;
    int floor= findfloor(arr,4,x,true);
    int ciel= findfloor(arr,4,x,false);
    cout<<floor<<" "<<ciel;
}