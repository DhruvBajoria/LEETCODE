class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        for(auto x:nums)
        {
            v.push_back(x);
        }
         for(auto x:nums)
        {
            v.push_back(x);
        }
        return v;
        
    }
};