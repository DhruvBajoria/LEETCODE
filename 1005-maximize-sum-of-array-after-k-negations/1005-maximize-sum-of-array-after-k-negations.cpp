class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        while(k--)
        {
            nums[0]=0-nums[0];
            
            sort(nums.begin(),nums.end());
                
        }
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        return sum;
            
    }
};