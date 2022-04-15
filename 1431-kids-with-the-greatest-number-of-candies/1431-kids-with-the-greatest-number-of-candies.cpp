class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        int m=*max_element(c.begin(),c.end());
        vector<bool>v;
        for(int i=0;i<c.size();i++)
        {
            if(c[i]+e>=m)
                v.push_back(true);
            else
                v.push_back(false);
                
        }
        return v;
    }
};