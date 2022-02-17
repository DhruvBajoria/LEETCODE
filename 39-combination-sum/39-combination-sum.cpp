class Solution {
public:
    void solve(vector<int>&c,int t,int i,vector<int>&h,vector<vector<int>>&v)
    {
        if(i==c.size())
        {
            if(t==0)
            {
                v.push_back(h);
            }
            return;
        }
        if(c[i]<=t)
        {
            h.push_back(c[i]);
            solve(c,t-c[i],i,h,v);
            h.pop_back();
        }
        
        solve(c,t,i+1,h,v);
        return ;
    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<vector<int>>v;
        vector<int>h;
        solve(c,t,0,h,v);
        return v;
    }
};
   