class Solution {
public:
    
    
    
    
    bool validPath(int n, vector<vector<int>>& edges, int s, int d) {
        vector<vector<int>>graph(n);
        
        for(int i=0;i<edges.size();i++)
        {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int>vis(n,0);
        queue<int>q;
        q.push(s);
        vis[s]=1;
        while(!q.empty())
        {
            int node =q.front();
            q.pop();
            if(node==d)
                return true;
            for(int i=0;i<graph[node].size();i++)
            {
                if(vis[graph[node][i]]==0)
                {
                    q.push(graph[node][i]);
                    vis[graph[node][i]]=1;
                }
            }
        }
      
        return false;
    }
};