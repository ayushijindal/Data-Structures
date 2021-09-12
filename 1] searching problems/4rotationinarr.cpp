#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int searchfrmax(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start<=end)
    {
        int mid=(start+end)/2;

        if(arr[mid]<arr[mid+1])
        {
            if(arr[mid] < arr[n-1])   end=mid-1;
            else if(arr[mid+1] > arr[n-1])    start=mid;
        }

        else if(arr[mid]>arr[mid+1]) return mid;
    }return 0 ;
}

int main(){
    int arr[]={4,5,6,7,8,1,2,3};
    int n=7,target=6;

    int piv= searchfrmax(arr, 7);
}