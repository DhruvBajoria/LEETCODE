class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<int>r,c;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    r.push_back(i);
                    c.push_back(j);
                }
            }
        }
        
        for(int i=0;i<r.size();i++)
        {
            for(int j=0;j<m;j++)
            {
                mat[r[i]][j]=0;
            }
        }
         for(int i=0;i<c.size();i++)
        {
            for(int j=0;j<n;j++)
            {
                mat[j][c[i]]=0;
            }
        }
    }
};