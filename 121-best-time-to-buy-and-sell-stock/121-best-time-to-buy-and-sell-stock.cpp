class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ma=0;
        int mi=prices[0];
        for(int i=1;i<n;i++)
        {
            ma=max(ma,prices[i]-mi);
            mi=min(mi,prices[i]);
        }
        return ma;
        
    }
};