// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends

bool ispresent(int arr[],int l,int h,int t)
{
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(arr[mid]==t)
        return true;
        else if(arr[mid]<t)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    return false;
}
bool findPair(int arr[], int size, int n){
  
    sort(arr,arr+size);
    for(int i=0;i<size;i++)
    {
        int d=n+arr[i];
        if(ispresent(arr,i+1,size-1,d))
        return true;
        
    }
    return false;

    //code
    
}