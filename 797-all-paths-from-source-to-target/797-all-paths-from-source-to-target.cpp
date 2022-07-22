class Solution {
public:
    void solve(vector<vector<int>>& graph,vector<vector<int>>& ans,vector<int>path,int s,int d)
    {
        path.push_back(s);
        if(s==d)
        {
            ans.push_back(path);
            return;
        }
        for(auto x:graph[s])
        {
            solve(graph,ans,path,x,d);
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int>path;
        vector<vector<int>>ans;
        int node=graph.size();
        if(node==0)
            return ans;
        solve(graph,ans,path,0,node-1);
            return ans;
        
    }
};