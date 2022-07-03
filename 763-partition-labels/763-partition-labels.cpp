class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.length();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]-'a']=i;
            
        }
        int ans=0;
        int last=0;
        vector<int>res;
        for(int i=0;i<n;i++)
        {
             ans=max(ans,mp[s[i]-'a']);
            if(i==ans)
            {
                res.push_back(i-last+1);
                last=i+1;
            }
        }
        return res;
        
        
    }
};