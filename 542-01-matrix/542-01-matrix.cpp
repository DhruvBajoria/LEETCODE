class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
         int n = mat.size(), m = mat[0].size();
         int ma=n+m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                    continue;
                int t=ma,l=ma;
                
                if(i-1>=0)
                    t=mat[i-1][j];
                if(j-1>=0)
                    l=mat[i][j-1];
                mat[i][j]=min(t,l)+1;
                    
            }
        }
          for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                int t=ma,l=ma;
                if(mat[i][j]==0)
                    continue;
                if(i+1<n)
                    t=mat[i+1][j];
                if(j+1<m)
                    l=mat[i][j+1];
                mat[i][j]=min(mat[i][j],min(t,l)+1);
                    
            }
        }
        return mat;
    }
};