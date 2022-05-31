// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isvalid(int arr[],int n,int m,int ma)
    {
        int student=1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum>ma)
            {
                student++;
                sum=arr[i];
            }
             if(student>m)
             return false;
        }
        return true;
    }
    int findPages(int arr[], int N, int M) 
    {
        if(M>N)
        return -1;
        int res=-1;
        int start=-1,end=0;
        for(int i=0;i<N;i++)
        {
            start=max(start,arr[i]);
            end+=arr[i];
        }
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(isvalid(arr,N,M,mid))
            {
               res=mid ;
               end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return res;//code here
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends