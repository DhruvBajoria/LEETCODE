class Solution {
public:
    void dfs(vector<vector<int>>&g,int s,vector<bool>&vis)
    {
        if(vis[s]==true)
            return;
        vis[s]=true;
        for(int i=0;i<g[s].size();i++)
        {
            if(i==s)
                continue;
            if(g[s][i] && !vis[i])
            dfs(g,i,vis);
        }
        return;
    }
    int findCircleNum(vector<vector<int>>& c) {
        int n=c.size();
        cout<<n<<endl;
        // vector<vector<int>>g(n,vector<int>());
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<n;i++)
        //     {
        //         if(c[i][j]==1)
        //         {
        //             g[i].push_back(j);
        //         }
        //     }
        // }
        int cnt=0;
        vector<bool>vis(n,false);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(c,i,vis);
                cnt++;
            }
        }
        
        return cnt;
        
        
    }
};