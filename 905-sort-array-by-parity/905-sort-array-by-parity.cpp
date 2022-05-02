class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>o;
        vector<int>e;
        vector<int>ans;
        for(auto x:nums)
        {
            if(x%2==0)
                e.push_back(x);
            else
                o.push_back(x);
        }
        ans.insert(ans.begin(),e.begin(),e.end());
        ans.insert(ans.end(),o.begin(),o.end());
        return ans;
    }
};