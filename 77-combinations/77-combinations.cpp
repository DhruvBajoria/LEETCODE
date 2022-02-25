class Solution {
public:
    void solve(vector<int>&nums,int i,int k,vector<int>&h,vector<vector<int>>&v)
    {
        if(h.size()==k)
            v.push_back(h);
        for(int j=i;j<nums.size();j++)
        {
            if(j>i&&nums[j]==nums[j-1])
                continue;
            h.push_back(nums[j]);
            solve(nums,j+1,k,h,v);
            h.pop_back();
        }
        return;
        
//         if(i==nums.size())
//         {
//             if(h.size()==k)
//                 v.push_back(h);
//             return;
//         }
        
//         h.push_back(nums[i]);
//         solve(nums,i+1,k,h,v);
//         h.pop_back();
//         solve(nums,i+1,k,h,v);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>nums;
        for(int i=1;i<=n;i++)
        {
            nums.push_back(i);
        }
        vector<int>h;
        vector<vector<int>>v;
        solve(nums,0,k,h,v);
        return v;
    }
};