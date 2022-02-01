class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0;
        int mi=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            mi=min(mi,prices[i]);
            p=max(p,prices[i]-mi);
        }
        return p;
        
    }
};