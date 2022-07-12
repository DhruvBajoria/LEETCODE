class Solution {
public:
    void solve(vector<int>&nums,vector<vector<int>>&v,vector<int>&h,int i)
    {
        v.push_back(h);
        for(int j=i;j<nums.size();j++)
        {
            h.push_back(nums[j]);
            solve(nums,v,h,j+1);
            h.pop_back();
        }
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>h;
        solve(nums,v,h,0);
        return v;
    }
};