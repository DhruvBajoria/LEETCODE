class Solution {
public:
    int secondHighest(string s) {
        set<int>se;
        for(auto x:s)
        {
            if(x>='0'&&x<='9')
                se.insert(x-'0');
        }
        vector<int>v;
        for(auto x:se)
            v.push_back(x);
        return (v.size()<2)?-1:v[v.size()-2];
    }
};