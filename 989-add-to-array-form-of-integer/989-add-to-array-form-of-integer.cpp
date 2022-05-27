class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
  int n=nums.size();
        int carry=k;
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