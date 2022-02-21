class Solution {
public:
    int f(int ind,int t,vector<int>c,vector<vector<int>>&dp)
    {
        if(ind==0)
        {
            return (t%c[0]==0);
        }
        if(dp[ind][t]!=-1)
            return dp[ind][t];
        int nottake=f(ind-1,t,c,dp);
        int take=0;
        if(c[ind]<=t)
        {
            take=f(ind,t-c[ind],c,dp);
        }
        return dp[ind][t]=take+nottake;
    }
    int change(int t, vector<int>& c) {
        int n=c.size();
        vector<vector<int>>dp(n,vector<int>(t+1,-1));
        return f(n-1,t,c,dp);
    }
};