class Solution {
public:
    int minMoves(vector<int>& nums) {
      int n=nums.size();
        if(n==1)
            return 0;
        sort(nums.begin(),nums.end());
        int res=0,carry=0;
        for(int i=1;i<n;i++)
        {
             res+=nums[i]-nums[i-1]+carry;
            carry+=nums[i]-nums[i-1];
        }
        return res;
    }
};