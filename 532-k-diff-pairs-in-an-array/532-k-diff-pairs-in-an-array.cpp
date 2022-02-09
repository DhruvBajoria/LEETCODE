class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
    
        set<pair<int,int>>s;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(abs(nums[j]-nums[i])==k)
                {
                    pair<int,int>p={max(nums[j],nums[i]),min(nums[j],nums[i])};
                    if(s.find(p)==s.end())
                    {
                        ans++;
                        s.insert(p);
                    }
                }
            }
        }
        return ans;
    }
    
};