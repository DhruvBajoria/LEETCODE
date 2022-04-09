class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int>m;
        for(auto x:nums)
        {
            m[x]++;
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto u:m)
        {
            pq.push({u.second,u.first});
            if(pq.size()>k)
                pq.pop();
        }
        vector<int>v;
        while(pq.empty()==false)
        {
           v.push_back(pq.top().second);
            pq.pop();
        }
        
        return v;
    }
};