// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        int sum=0,mi=INT_MAX,j=0;
        int i=0;
       while(i<n)
        {
           sum+=arr[i];
            while(sum>x)
            {
                mi=min(mi,i-j+1);
                sum-=arr[j];
                j++;
            }
           
            i++;
        }
     
        return mi;// Your code goes here   
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