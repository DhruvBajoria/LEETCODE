class Solution {
public:
    int maxProfit(vector<int>& p) {
       int cost=0;
        int mini=p[0];
        int ma=0;
        for(int i=1;i<p.size();i++)
        {
            cost=p[i]-mini;
            ma=max(ma,cost);
            mini=min(mini,p[i]);
        }
        return ma;
    }
};