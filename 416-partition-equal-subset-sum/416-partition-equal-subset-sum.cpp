class Solution {
public:
    bool solve(int i,int t,vector<vector<int>>&dp,vector<int>&nums)
    {
        if(t==0)
        return true;
        if(i==0)
        return nums[0]==t;
        if(dp[i][t]!=-1)
        return dp[i][t];
        bool nonpick=solve(i-1,t,dp,nums);
        bool pick=false;
        if(t>=nums[i])
        pick=solve(i-1,t-nums[i],dp,nums);
        
        return dp[i][t]=pick | nonpick;
    }
    bool canPartition(vector<int>& nums) {
        int s=0;
        
        int n=nums.size();
        for(auto x:nums)
        {
            s+=x;
        }
        if(s%2==1)
            return false;
        int t=s/2;
        vector<vector<int>>dp(n,vector<int>(t+1,-1));
        return solve(n-1,t,dp,nums);
           
    }
};