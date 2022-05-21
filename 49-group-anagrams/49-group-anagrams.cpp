class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>v;
        unordered_map<string,vector<string>>m;
        string temp;
        for(int i=0;i<strs.size();i++)
        {
            temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            m[strs[i]].push_back(temp);
            
        }
        for(auto x:m)
        {
            v.push_back(x.second);
        }
        return v;
     
    }
};