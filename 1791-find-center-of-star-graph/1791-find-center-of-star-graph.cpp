class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        unordered_map<int,int>m;
        
        for(int i=0;i<n;i++)
        {
            m[edges[i][0]]++;
            m[edges[i][1]]++;
            
        }
        for(auto it:m)
        {
            if(it.second==n)
                return it.first;
        }
        return 0;
    }
};