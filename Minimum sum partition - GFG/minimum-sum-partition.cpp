// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
 vector<int>ans;
  
  bool subsetsum(int arr[],vector<int>&ans,long long sum,int n)
  {
      bool t[n+1][sum+1];
      for(int i=0;i<=n;i++)
      {
          for(int j=0;j<=sum;j++)
          {
              if(i==0)
              t[i][j]=false;
              if(j==0)
              t[i][j]=true;

          }
      }
      for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(arr[i-1]<=j){
                t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
}

  for(int j=0;j<=(sum)/2;j++)
  {
     if(t[n][j]==true)
     ans.push_back(j);
  }
  return t[n][sum];
  }
  
  
	int minDifference(int a[], int n)  { 
	     int s=0;
        vector<int>nums;
        for(int i=0;i<n;i++)
        {
            nums.push_back(a[i]);
        }
      
       
        for(auto x:nums)
        {
            s+=x;
        }
        int k=s;
         vector<vector<bool>>dp(n,vector<bool>(k+1,0));
        for(int i=0;i<n;i++)
        {
            dp[i][0]=true;
            
        }
        if(nums[0]<=k){
             dp[0][nums[0]]=true;
        }
        
        
        for(int i=1;i<n;i++)
        {
            for(int tgt=1;tgt<=k;tgt++)
            {
                bool nonpick=dp[i-1][tgt];
                bool pick=false;
                if(tgt>=nums[i])
                {
                    pick=dp[i-1][tgt-nums[i]];
                }
                dp[i][tgt]=pick | nonpick;
            }
        }
        
        
        int mini=1e9;
        for(int s1=0;s1<=s/2;s1++)
        {
            if(dp[n-1][s1]==true)
            {
               
                mini=min(mini,abs((s-s1)-s1));
            }
        }
        return mini;
	    
	    
	    
	    
	    
	    
// 	    long long sum=0;
// 	    for(int i=0;i<n;i++)
// 	    sum+=arr[i];
// 	    subsetsum(arr,ans,sum,n);
// 	    long long mn=INT_MAX;
// 	    for(int i=0;i<ans.size();i++)
// 	    {
// 	        mn=min(mn,sum-(2*ans[i]));
// 	    }
// 	  return mn;  // Your code goes here
	}
  
/*bool subsetSum(int arr[],vector<int>&ans,int n,int sum){
int dp[n+1][sum+1];
for(int i=0;i<=n;i++){
for(int j=0;j<=sum;j++){
if(i==0){dp[i][j]=0;}
if(j==0){dp[i][j]=1;}
}
}
for(int i=1;i<=n;i++){
for(int j=1;j<=sum;j++){
if(arr[i-1]<=j){
dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
}
else{
dp[i][j]=dp[i-1][j];
}
}
}
for(int j=0;j<=(sum/2);j++){
if(dp[n][j]==1){
ans.push_back(j);
}
}
return dp[n][sum];
}
int minDifference(int arr[], int n) {
int sum=0;
for(int i=0;i<n;i++)
{ sum+=arr[i]; }
subsetSum(arr,ans,n,sum);
int mm=INT_MAX; 
for(int i=0;i<ans.size();i++)
{ mm=min(mm,sum-(2*ans[i])); }
return mm; }*/
  
  
  
  
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends