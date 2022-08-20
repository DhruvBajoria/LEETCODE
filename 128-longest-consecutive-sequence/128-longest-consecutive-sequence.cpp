class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        if(nums.size()==0)
            return 0;
        for(auto x:nums)
        {
            s.insert(x);
        }
        nums.clear();
        for(auto x:s)
        {
            nums.push_back(x);
        }
        if(nums.size()==1)
            return 1;
        int cnt=1,ma=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]+1==nums[i+1])
            {
                cnt++;
            }
            else
            {
                cnt=1;
            }
            ma=max(ma,cnt);
        }
        return ma;
        
    }
};