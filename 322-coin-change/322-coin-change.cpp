class Solution {
public:
    // int f(int ind,int t,vector<int>&c,vector<vector<int>>&dp)
    // {
    //     if(ind==0)
    //     {
    //         if(t%c[0]==0)
    //             return t/c[0];
    //         else
    //             return 1e9;
    //     }
    //     if(dp[ind][t]!=-1)
    //         return dp[ind][t];
    //     int nottake=f(ind-1,t,c,dp);
    //     int take=1e9;
    //     if(c[ind]<=t)
    //         take=1+f(ind,t-c[ind],c,dp);
    //     return dp[ind][t]=min(take,nottake);
    // }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,0));
        for(int tgt=0;tgt<=amount;tgt++)
        {
            if(tgt%coins[0]==0)
                dp[0][tgt]=tgt/coins[0];
            else
                dp[0][tgt]=1e9;
            
        }
        
        for(int i=1;i<n;i++)
        {
            for(int tgt=0;tgt<=amount;tgt++)
            {
                 int nottake=dp[i-1][tgt];
                int take=1e9;
                if(coins[i]<=tgt)
                    take=1+dp[i][tgt-coins[i]];
                dp[i][tgt]=min(take,nottake);
                
            }
        }
        
        int ans=dp[n-1][amount];
        if(ans>=1e9)
            return -1;
        return ans;
    }
};