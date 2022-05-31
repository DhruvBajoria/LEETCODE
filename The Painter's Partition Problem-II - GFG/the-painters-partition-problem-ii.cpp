// { Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  bool isvalid(int arr[],int n,int k,long long int ma)
  {
      long long painter=1;
      long long int sum=0;
      for(int i=0;i<n;i++)
      {
          sum+=arr[i];
          if(sum>ma)
          {
              painter++;
              sum=arr[i];
          }
          if(painter>k)
          return false;
      }
      return true;
  }
    long long minTime(int arr[], int n, int k)
    {
        long long int res=-1;
        // if(k>n)
        // return res;
        long long int l=-1,h=0;
        for(int i=0;i<n;i++)
        {
            if(l < arr[i]) l = arr[i];
            h+=arr[i];
        }
        while(l<=h)
        {
            long long int mid=l+(h-l)/2;
            if(isvalid(arr,n,k,mid))
            {
                res=mid;
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return res;
        // code here
        // return minimum time
    }
};

// 7 10
// 10 5 20 25 17 23 2 9 4 13

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}  // } Driver Code Ends