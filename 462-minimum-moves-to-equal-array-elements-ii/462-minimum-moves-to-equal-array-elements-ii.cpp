class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int diff=0, avg=nums[nums.size()/2];
        for(int num : nums) diff+=abs(num-avg);
        return diff;
    }
};