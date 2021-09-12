#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int peaksearch(int arr[],int size)
{
    int low=0;
    int high=size;
    while(low<high)
    {   int mid=(low+high)/2;

        if(arr[mid]<arr[mid+1])
            low=mid+1;
        else if (arr[mid]>arr[mid+1])
            high=mid;
    }
    return low;
}
int binarysearch(int arr[], int low, int high, int target)
{       while(low<=high)
        {   int mid=(low+high)/2;
            if(arr[mid]>target)           high=mid-1;
            else if(arr[mid]<target)      low=mid+1;  
            else return mid;
            
        }
        return -1;
}
int agobinarysearch(int arr[] ,int low, int high, int target){
     while(low<=high)
        {   int mid=(low+high)/2;
            if(arr[mid]>target)           low=mid+1;
            else if(arr[mid]<target)      high=mid-1;
            else return mid;
            
        }
        return -1;
}

int main(){
    int arr[]={1,2,3,4,7,6,5,4};
    
    int n=7;
    int target=4;
    int peak=peaksearch(arr,n);
    int ans=binarysearch(arr, 0, peak, target);
    if(ans ==-1)
        ans=agobinarysearch(arr,peak, n, target);
    cout<<ans;

}