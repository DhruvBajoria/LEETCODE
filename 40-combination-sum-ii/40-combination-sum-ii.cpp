class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>&c,int t,int i,int sum,vector<int>&h,int n)
    {
        if(sum==t)
        {
            ans.push_back(h);
            return ;
        }
        if(sum>t)return;
        for(int j=i;j<n;j++)
        {
            if(j>i&&c[j]==c[j-1])
                continue;
            sum+=c[j];
            h.push_back(c[j]);
            solve(c,t,j+1,sum,h,n);
            h.pop_back();
            sum-=c[j];
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        int n=c.size();
        vector<int>h;
        sort(c.begin(),c.end());
        solve(c,t,0,0,h,n);
        return ans;
    }
};