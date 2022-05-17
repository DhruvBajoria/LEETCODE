class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
             unordered_map<int,int>m;
        vector<int>v;
        int n=nums.size();
        for(auto x:nums)
        {
            m[x]++;
        }
        for(auto x:m)
        {
            if(x.second>n/3)
                v.push_back(x.first);
        }
   return v;
    }
    
};