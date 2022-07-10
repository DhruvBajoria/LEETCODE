class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
      
        vector<int>dp(n,0);

        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<n;i++)
        {
            int f=cost[i];
            if(i>1)
                f+=dp[i-2];
            int g=cost[i]+dp[i-1];
            dp[i]=min(f,g);
        }
        return min(dp[n-1],dp[n-2]);
        
   
    }
};



