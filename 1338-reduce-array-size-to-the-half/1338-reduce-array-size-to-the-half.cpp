class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto x:arr)
        {
            mp[x]++;
            
        }
        vector<int>v;
        for(auto x:mp)
        {
            v.push_back(x.second);
            
        }
        sort(v.begin(),v.end());
        int n=arr.size();
        int cnt=0;
        reverse(v.begin(),v.end());
        int i=0;
        while(n>arr.size()/2)
        {
            cnt++;
            n-=v[i++];
        }
        return cnt;
    }
};