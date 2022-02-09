class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
          
        int n=10001;
        vector<int>dp(n,0);
          vector<int>house(n,0);
        for(auto x:nums)
        {
            house[x]+=x;
        }
        
        dp[0]=0;
        dp[1]=house[1];
        for(int i=2;i<n;i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+house[i]);
        }
        return dp[n-1];
    }
};