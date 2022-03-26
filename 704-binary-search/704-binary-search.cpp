class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1;
		int mid; //since the arrays are 0 based
        while(low<=high){
            mid=low+(high-low)/2; // to overcome overflow;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                high=mid-1;
            else 
                low=mid+1;
        }
        return -1;
    }
};