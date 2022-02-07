class Solution {
public:
    int largest1BorderedSquare(vector<vector<int>>& g) {
          int n=g.size();
        int m=g[0].size();
        int ma=0;
        vector<vector<int>>hl(n,vector<int>(m,0));
        vector<vector<int>>vl(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]==1)
                {
                    hl[i][j]=(j==0)?1:1+hl[i][j-1];
                    vl[i][j]=(i==0)?1:vl[i-1][j]+1;
                    
                }
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                int small=min(vl[i][j],hl[i][j]);
                while(small>ma)
                {
                    if(hl[i-small+1][j]>=small&&vl[i][j-small+1]>=small)
                        ma=small;
                    small--;
                }
            }
        }
        return ma*ma;
    }
};