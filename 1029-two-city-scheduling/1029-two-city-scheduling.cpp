class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
       int ans=0;
        vector<int>v;
        int n=costs.size();
        for(auto x:costs)
        {
            ans+=x[0];
            v.push_back(x[1]-x[0]);
            
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n/2;i++)
        {
            ans+=v[i];
        }
        return ans;
        
    }
};