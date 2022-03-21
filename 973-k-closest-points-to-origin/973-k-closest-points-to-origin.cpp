class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        int n=points.size();
        priority_queue<pair<int,vector<int>>>pq;
        for(auto p:points)
        {
            int x=p[0]*p[0]+p[1]*p[1];
                pq.push({x,{p[0],p[1]}});
            if(pq.size()>k)
                pq.pop();
        }
        vector<vector<int>>v;
        while(!pq.empty())
        {
            v.push_back(pq.top().second);
                pq.pop();
        }
        return v;      
    }
};



