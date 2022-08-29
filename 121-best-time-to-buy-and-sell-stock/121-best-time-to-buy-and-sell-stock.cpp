class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0,mi=prices[0];
        int ans=0;
        for(int i=1;i<prices.size();i++)
        {
            p=prices[i]-mi;
            ans=max(ans,p);
            mi=min(mi,prices[i]);
        }
        return ans;
        
    }
};