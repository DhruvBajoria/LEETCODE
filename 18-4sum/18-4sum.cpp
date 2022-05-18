
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>v;
        set<vector<int>>s;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int netgt=target-nums[i]-nums[j];
                int x=j+1,y=n-1;
                while(x<y)
                {
                    int a=nums[x]+nums[y];
                    if(a<netgt)
                    {
                        x++;
                    }
                    else if(a>netgt)
                    {
                        y--;
                    }
                    else
                    {
                        s.insert({nums[i],nums[j],nums[x],nums[y]});
                        x++;
                        y--;
                    }
                }
            }
        }
        for(auto x:s)
        {
            v.push_back(x);
        }
        return v;
 
    }
};