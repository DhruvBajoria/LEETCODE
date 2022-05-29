class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> res(2,-1);
        int t=-1;
        int start=0,end=nums.size()-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                t=mid;
                end=mid-1;
                
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        
        res[0]=t;
        start=0,end=nums.size()-1;
        int tt=-1;
        
         while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                tt=mid;
                start=mid+1;
                
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        res[1]=tt;
        return res;
    
    }
};