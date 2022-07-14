class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>&c,int sum,int t,vector<int>&h,int n,int i)
    {
        if(sum==t)
        {
            ans.push_back(h);
            return ;
        }
        if(sum>t)
            return;
        
        for(int j=i;j<n;j++)
        {
            sum+=c[j];
            h.push_back(c[j]);
            solve(c,sum,t,h,n,j);
            h.pop_back();
            sum-=c[j];
        }
    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        int n=c.size();
        vector<int>h;
        solve(c,0,t,h,n,0);
        return ans;
    }
};