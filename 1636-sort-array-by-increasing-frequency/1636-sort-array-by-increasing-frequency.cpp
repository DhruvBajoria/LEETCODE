class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int,greater<int>>m;
        for(auto x:nums)
        {
            m[x]++;
        }
        
        priority_queue<pair<int,int>>pq;
        for(auto x:m)
        {
            pq.push({-x.second,x.first});
        }
        
        vector<int>v;
        while(pq.empty()==false)
        {
            int freq=pq.top().first;
            while(freq<0)
            {
                v.push_back(pq.top().second);
                freq++;
            }
            pq.pop();
        }
       
        return v;
    }
};