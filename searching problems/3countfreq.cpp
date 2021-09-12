#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int binary(int arr[], int size, int target, bool isleft)
{   int ans=-1;
    int start= 0;
    int end=size-1;

    while(start<=end)
    {
        int mid=(start+end)/2;

        if(arr[mid]>target)
            end=mid-1;

        else if(arr[mid]<target)
            start=mid+1;

        else if((arr[mid]==target)){
            ans=mid;
            if(isleft)  end=mid-1;          //searching in left side of the array
            else        start=mid+1;        // searching int the right side of the array
            
        }
    }
    return ans;
}
int main(){
    int arr[]={1,2,4,6,6,6,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int left = binary(arr, n, 6, true);
    int right=binary(arr, n, 6, false);
    cout<<left<<" "<<right;
    

}