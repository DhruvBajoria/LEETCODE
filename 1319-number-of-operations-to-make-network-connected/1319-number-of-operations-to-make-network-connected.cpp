class Solution {
public:
    void dfs(vector<vector<int>>&g,vector<bool>&vis,int s)
    {
        if(vis[s]==true)
            return;
        vis[s]=true;
        for(int i=0;i<g[s].size();i++)
        {
            dfs(g,vis,g[s][i]);
        }
        
        return;
    }
    int makeConnected(int n, vector<vector<int>>& c) {
        if(n>c.size()+1)
            return -1;
        vector<vector<int>>g(n,vector<int>());
        for(auto x:c)
        {
            g[x[0]].push_back(x[1]);
            g[x[1]].push_back(x[0]);
        }
        vector<bool>vis(n,false);
        int cnt=0;
        for(int i=0;i<n;i++)
        {
             
            if(!vis[i])
            {
                dfs(g,vis,i);
                cnt++;
            }
            
        }
        return cnt-1;
    }
};