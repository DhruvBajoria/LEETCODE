class Solution {
public:
    
    void solve(vector<int>&nums,int i,vector<int>&h,vector<vector<int>>&v)
    {
        v.push_back(h);
        for(int j=i;j<nums.size();j++)
        {
            h.push_back(nums[j]);
            solve(nums,j+1,h,v);
            h.pop_back();
        }
        return;
            
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>h;
        solve(nums,0,h,v);
        return v;
        
    }
};

