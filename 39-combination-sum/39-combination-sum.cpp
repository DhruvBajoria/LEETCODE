class Solution {
public:
    void solve(vector<int>&c,int t,int i,int n,vector<vector<int>>&ans,vector<int>&v)
    {
        if(i==n)
        {
            if(t==0)
            {
                ans.push_back(v);
            }
            return ;
        }
        
        if(c[i]<=t)
        {
            v.push_back(c[i]);
            solve(c,t-c[i],i,n,ans,v);
            v.pop_back();
        }
        solve(c,t,i+1,n,ans,v);
    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<vector<int>>ans;
        int n=c.size();
        vector<int>v;
        solve(c,t,0,n,ans,v);
        return ans;
        
    }
};