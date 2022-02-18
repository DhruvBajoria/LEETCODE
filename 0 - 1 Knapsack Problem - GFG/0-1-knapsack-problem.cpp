// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int w, int wt[], int val[], int n) 
    { vector<vector<int>>dp(n,vector<int>(w+1,0));
      for(int W=wt[0];W<=w;W++)
      {
          dp[0][W]=val[0];
      }
      
      for(int i=1;i<n;i++)
      {
          for(int W=0;W<=w;W++)
          {
              int nontake=dp[i-1][W];
              int take=INT_MIN;
              if(wt[i]<=W)
              take=val[i]+dp[i-1][W-wt[i]];
              dp[i][W]=max(take,nontake);
          }
      }
      return dp[n-1][w];
       // Your code here
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends