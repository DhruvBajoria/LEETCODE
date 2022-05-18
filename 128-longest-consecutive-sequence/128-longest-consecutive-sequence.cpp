class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int>s;
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
        vector<int>v;
        int cnt=1,ma=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-1==nums[i-1])
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