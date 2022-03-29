class Solution {
public:
    int maxProfit(vector<int>& p) {
        int cost=0;
        int ans=0;
        int mini=p[0];
        for(int i=1;i<p.size();i++)
        {
            cost=p[i]-mini;
            ans=max(ans,cost);
            mini=min(mini,p[i]);
        }
        return ans;
     
    }
};