class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>v;
        vector<int>temp;
        int n=mat.size(),m=mat[0].size();
        if(n*m!=r*c)
            return mat;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                temp.push_back(mat[i][j]);
            }
        }
        int d=0;
        
        for(int i=0;i<r;i++)
        { vector<int>s;
            for(int j=0;j<c;j++)
            {
                s.push_back(temp[d++]);
            }
         v.push_back(s);
        }
        return v;
    }
};