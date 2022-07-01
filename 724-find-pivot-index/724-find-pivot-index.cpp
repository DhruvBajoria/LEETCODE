class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,0);
        vector<int>dp2(n,0);
        dp[0]=nums[0];
        dp2[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
        {
            dp[i]=dp[i-1]+nums[i];
        }
        for(int i=n-2;i>=0;i--)
        {
            dp2[i]=dp2[i+1]+nums[i];
        }
        
        for(int i=0;i<n;i++)
        {
            if(dp[i]==dp2[i])
                return i;
        }
        return -1;
    }
};