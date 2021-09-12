#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{   int arr[]={6,2,5,4,1,5,6};
    int n=7;
    stack<int>ps;   //previous smallest
    stack<int>ns;   //next smallest

    vector<int>vp;
    ps.push(0);
    vp.push_back(-1);

    vector<int>vn;

    for(int i=1; i<n; i++)
    {   while (ps.empty()==false && arr[ps.top()]>=arr[i])
            ps.pop();

        if(ps.empty())
            vp.push_back(-1);
        else
            vp.push_back(ps.top());
        
        ps.push(i);
    }
    
    
 
    ns.push(n-1);
    vn.push_back(n);

    for(int i=n-2; i>=0; i--)
    {   while(ns.empty()==false && arr[ns.top()]>=arr[i])
            ns.pop();

        if(ns.empty())
            vn.push_back(n);
        else
            vn.push_back(ns.top());

        ns.push(i);
    }
    reverse(vn.begin(), vn.end());
    
   

    int res=0;
    for(int i=0; i<n; i++)
    {   int curr=arr[i];
        curr+=(i-vp[i]-1)*arr[i];
        curr+=(vn[i]-i-1)*arr[i];
        res=max(res,curr);
    }
    cout<<res;
}