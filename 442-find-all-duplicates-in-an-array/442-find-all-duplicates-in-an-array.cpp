class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       int n=nums.size();
        unordered_map<int,int>m;
        for(auto x:nums)
        {
            m[x]++;
        }
        vector<int>v;
        for(auto y:m)
        {
            if(y.second>1)
                v.push_back(y.first);
        }
        return v;
    }
};