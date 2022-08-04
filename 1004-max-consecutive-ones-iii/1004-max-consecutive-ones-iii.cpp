class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,zc=0,ma=INT_MIN;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]==0)
            {
                zc++;
            }
            
            while(zc>k)
            {
                if(nums[i]==0)
                {
                    zc--;
                }
                i++;
            }
            ma=max(ma,j-i+1);
            
        }
        return ma;
    }
};