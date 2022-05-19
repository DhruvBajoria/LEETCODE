class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>v;
        vector<int>temp;
        int s=original.size();
        if(s!=m*n)
            return v;
        int c=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
               temp.push_back(original[c++]);
            }
            v.push_back(temp);
            temp.clear();
        }
        return v;
    }
};