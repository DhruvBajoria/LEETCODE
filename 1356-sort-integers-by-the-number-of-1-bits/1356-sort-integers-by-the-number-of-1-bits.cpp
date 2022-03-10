class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>v;
        for(int i=0;i<arr.size();i++)
        {
            int a=__builtin_popcount(arr[i]);
            v.push_back({a,arr[i]});
        }
        sort(v.begin(),v.end());
        vector<int>ans;
        for(auto x:v)
        {
            ans.push_back(x.second);
        }
        return ans;
            
    }
};