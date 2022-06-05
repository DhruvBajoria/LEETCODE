class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto x:nums)
        {
            mp[x]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto x:mp)
        {
            pq.push({x.second,x.first});
            if(pq.size()>k)
                pq.pop();
        }
        
        vector<int>v;
        while(!pq.empty())
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        sort(v.begin(),v.end());
        return v;
        
    }
};