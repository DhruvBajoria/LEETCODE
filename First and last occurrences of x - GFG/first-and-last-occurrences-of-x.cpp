// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    vector<int>res(2,-1);
    int t=-1;
    int l=0,h=n-1;
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(arr[mid]==x)
        {
            t=mid;
            h=mid-1;
        }
        else if(arr[mid]<x)
        {
            l=mid+1;
        }
        else 
        {
            h=mid-1;
        }
        res[0]=t;
    }
     t=-1;
     l=0,h=n-1;
     while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(arr[mid]==x)
        {
            t=mid;
            l=mid+1;
        }
        else if(arr[mid]<x)
        {
            l=mid+1;
        }
        else 
        {
            h=mid-1;
        }
        res[1]=t;
    }
   return res; // code here
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends