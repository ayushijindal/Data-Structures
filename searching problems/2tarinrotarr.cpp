#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int findpivot(int arr[], int n)
{
    int low=0;
    int high=n;

    while(low<high)
    {
        int mid=(low+high)/2;

        if(arr[mid]<arr[mid+1])
            low=mid+1;
        else if(arr[mid]>arr[mid+1])
            high=mid;
    }
    return low;
}
int binary(int arr[],int low,int high,int target)
{

    while(low<=high)
    {   int mid=(low+high)/2;
        if(arr[mid]==target)    return mid;
        if(arr[mid]>target)
                high=mid-1;
            else if(arr[mid]<target)
                low=mid+1;
    }
    return -1;
}

int main(){
    int arr[]={3,4,5,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target;

    int piv=findpivot(arr,n);
}