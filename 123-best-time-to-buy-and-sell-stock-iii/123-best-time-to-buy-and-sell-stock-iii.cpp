class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int fbuy=INT_MAX,fp=0,sbuy=INT_MAX,sp=0;
        for(auto x:prices)
        {
            fbuy=min(fbuy,x);
            fp=max(fp,x-fbuy);
            sbuy=min(sbuy,x-fp);
            sp=max(sp,x-sbuy);
        }
        return sp;
    }
};