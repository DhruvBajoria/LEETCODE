// { Driver Code Starts

// CPP program to find Maximum number of partitions
// such that we can get a sorted array.
#include <bits/stdc++.h>
using namespace std;

// Function to find maximum partitions.
int maxPartitions(int arr[], int n);


// Driver code
int main()
{
	int t,n;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout << maxPartitions(arr, n)<<endl;
    }

	return 0;
}
// } Driver Code Ends


int maxPartitions(int arr[], int n)
{
   int p=arr[0];
   int cnt=0;
   for(int i=0;i<n;i++)
   {
       if(p<arr[i])
       {
           p=arr[i];
       }
       if(p==i)
       {
           cnt++;
       }
   }
   return cnt;
    // Complete the function
    
}