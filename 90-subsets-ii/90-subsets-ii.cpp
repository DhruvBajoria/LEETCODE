class Solution {
public:
    void solve(vector<int>&nums,int i,vector<vector<int>>&v,vector<int>&h)
    {
        v.push_back(h);
        for(int j=i;j<nums.size();j++)
        {
            if(j>i&&nums[j]==nums[j-1])
                continue;
            h.push_back(nums[j]);
            solve(nums,j+1,v,h);
            h.pop_back();
        }
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>h;
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        solve(nums,0,v,h);
        return v;
        
    }
};