class Solution {
public:
    int minPartitions(string n) {
        vector<int>v;
        for(auto x:n)
            v.push_back(x-'0');
        return *max_element(v.begin(),v.end());
        
    }
};