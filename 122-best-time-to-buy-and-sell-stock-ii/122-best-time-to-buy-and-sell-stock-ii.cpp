class Solution {
public:
//     int solve(vector<int>p,int n,int buy,int idx,vector<vector<int>>&dp)
//     {
//         if(idx==n)
//             return 0;
//         if(dp[idx][buy]!=-1)
//             return dp[idx][buy];
        
//         int profit=0;
//         if(buy)
//         {
//             profit=max(-p[idx]+solve(p,n,0,idx+1,dp),0+solve(p,n,1,idx+1,dp));
//         }
//         else
//         {
//             profit=max(p[idx]+solve(p,n,1,idx+1,dp),0+solve(p,n,0,idx+1,dp));
//         }
//        return dp[idx][buy]=profit;
//     }
             
    int maxProfit(vector<int>& prices) 
    {
        int ans=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>prices[i-1])
                ans+=prices[i]-prices[i-1];
        }
        return ans;
    }
};