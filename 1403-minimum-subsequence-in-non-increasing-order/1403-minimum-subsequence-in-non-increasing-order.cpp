class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        int sum=0;
        for(auto x:nums)
        {
            sum+=x;
        }
        int s=0;
        sort(nums.begin(),nums.end());
        int i=n-1;
        while(s<=sum/2&&i>=0)
        {
            v.push_back(nums[i]);
            s+=nums[i];
            i--;
        }
        return v;
        
    }
};