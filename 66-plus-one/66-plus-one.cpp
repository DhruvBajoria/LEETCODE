class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
      int n=nums.size();
        int carry=1;
        n--;
        while(n>=0)
        {
            carry+=nums[n];
            nums[n]=carry%10;
            carry/=10;
            n--;
        }
        while(carry)
        {
            nums.insert(nums.begin(),carry%10);
            carry/=10;
        }
        return nums;
    }
};