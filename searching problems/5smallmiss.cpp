#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int binarysearch(int arr[], int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;

        if(arr[mid] == mid)
            start=mid+1;
        else if(arr[mid] != mid)
            end=mid-1;
    }
    return start;
}
int main(){
    int arr[]={1, 2, 3, 4, 5, 6, 9, 11 ,15};
    int n=7;
    int miss=binarysearch(arr,n);
    cout<<miss;

}