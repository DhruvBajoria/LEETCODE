class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>r,c;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
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
                matrix[r[i]][j]=0;
            }
        }
        for(int j=0;j<c.size();j++)
        {
            for(int i=0;i<n;i++)
            {
                matrix[i][c[j]]=0;
            }
        }
 
        
        
    }
};