class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0,j=n-1;
        int ma=INT_MIN;
        while(i<j)
        {
            ma=max(ma,nums[i]+nums[j]);
            i++;j--;
        }
        return ma;
    }
};