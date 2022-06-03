// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
       int overcount=INT_MAX;
       for(int i=0;i<n;i++)
       {
           int j=i,count=0,sum=0;
           while(sum<=x&&j<n)
           {
               sum+=arr[j++];
               count++;
           }
           if(sum>x)
           overcount=min(overcount,count);
           
       }
       return overcount;
        // Your code goes here   
    }
};

// { Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}  // } Driver Code Ends