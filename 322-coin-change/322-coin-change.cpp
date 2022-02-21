class Solution {
public:
    int f(int ind,int t,vector<int>&c,vector<vector<int>>&dp)
    {
        if(ind==0)
        {
            if(t%c[0]==0)
                return t/c[0];
            else
                return 1e9;
        }
        if(dp[ind][t]!=-1)
            return dp[ind][t];
        int nottake=f(ind-1,t,c,dp);
        int take=1e9;
        if(c[ind]<=t)
            take=1+f(ind,t-c[ind],c,dp);
        return dp[ind][t]=min(take,nottake);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans= f(n-1,amount,coins,dp);
        if(ans>=1e9)
            return -1;
        return ans;
    }
};