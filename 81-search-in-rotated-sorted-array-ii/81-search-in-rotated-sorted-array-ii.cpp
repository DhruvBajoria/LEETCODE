class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
     
        int l=0,h=n-1;
         while(l<=h)                                //  Loop When all elements are same except one              
           { int mid=(l+h)/2;
             if(nums[mid]==target ||nums[l]==target || nums[h]==target)
               return true;
             l++,h--;     
           }
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            
            if(nums[mid]==target)
                return true;
            if(nums[mid]<=nums[h])
            {
                if(target>nums[mid]&& target <= nums[h])
                    l=mid+1;
                else
                    h=mid-1;
            }
            else{
                if(nums[l] <= target &&target<nums[mid])
                    h=mid-1;
                else
                    l=mid+1;
            }
        }
        
        return false;
    }
};