class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(auto x:s)
        {
            mp[x]++;
            
        }
        int ans=0;
        for(auto x:mp)
        {
            ans+=(x.second/2)*2;
            if(ans%2==0&&x.second%2)
                ans++;
        }
        return ans;
    }
};