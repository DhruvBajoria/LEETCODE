class Solution {
public:vector<vector<int>>ans;
    void solve(vector<int>&c,int i,int n,int k,vector<int>&h)
    {
        if(h.size()==k)
        {
            ans.push_back(h);
        }
        for(int j=i;j<n;j++)
        {
            h.push_back(c[j]);
            solve(c,j+1,n,k,h);
            h.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>c;
        for(int i=1;i<=n;i++)
        {
            c.push_back(i);
        }
        vector<int>h;
        solve(c,0,n,k,h);
        return ans;
    }
};