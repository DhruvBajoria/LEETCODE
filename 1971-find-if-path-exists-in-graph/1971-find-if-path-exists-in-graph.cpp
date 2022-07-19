class Solution {
public:
    
    bool haspath(vector<vector<int>>&graph,int s,int d,vector<int>&vis)
    {
        if(s==d)
            return true;
        if(vis[s]==1)
            return false;
        vis[s]=1;
        for(int i=0;i<graph[s].size();i++)
        {
            if(vis[graph[s][i]]==0)
            {
                bool nhaspath=haspath(graph,graph[s][i],d,vis);
                if(nhaspath)
                    return true;
            }
        
        }
        return false;
    }
    
    
    bool validPath(int n, vector<vector<int>>& edges, int s, int d) {
        vector<vector<int>>graph(n);
        
        for(int i=0;i<edges.size();i++)
        {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int>vis(n,0);
        return haspath(graph,s,d,vis);
    
    }
};