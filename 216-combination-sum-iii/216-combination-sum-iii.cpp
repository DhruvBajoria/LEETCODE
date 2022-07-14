class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>&c,int i,int n,int sum,int k,vector<int>&h)
    {
        // if(i==c.size())
        //     return;
        
        if(h.size()==k&&sum==n)
        {
            ans.push_back(h);
            return;
        }
        if(h.size()>k||sum>n)
            return;
        for(int j=i;j<9;j++)
        {
            // if(j>i&&c[j]==c[j-1])
            //     continue;
            sum+=c[j];
            h.push_back(c[j]);
            solve(c,j+1,n,sum,k,h);
            h.pop_back();
            sum-=c[j];
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>c;
        for(int i=1;i<=9;i++)
        {
            c.push_back(i);
        }
        vector<int>h;
        solve(c,0,n,0,k,h);
        
        return ans;
        
        
    }
};