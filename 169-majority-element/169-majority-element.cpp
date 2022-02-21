class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n%2==0)
        {
            return nums[(n-1)/2];
            
        }
        else{
            return nums[n/2];
        }
        
    }
};