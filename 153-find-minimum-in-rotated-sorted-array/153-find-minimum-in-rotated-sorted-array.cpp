class Solution {
public:
 
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
      int n=nums.size();
        int l=0,h=n-1;
        int mid;
        while(l<=h)
        {
            mid=l+(h-l)/2;
            if(nums[mid]<nums[h])
            {
                h=mid-1;

            }
            else
            {
                l=mid+1;
                
            }
        }
        return nums[mid];
    }
};