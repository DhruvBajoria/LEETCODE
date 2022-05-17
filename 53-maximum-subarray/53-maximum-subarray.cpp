class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int maxnow=nums[0];
        int maxover=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            maxnow=max(nums[i]+maxnow,nums[i]);
            maxover=max(maxnow,maxover);
        }
        return maxover;
    }
    
};