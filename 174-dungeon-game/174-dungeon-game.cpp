class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& d) {
        int n=d.size();
        int m=d[0].size();
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                if(i==n-1&&j==m-1)
                    d[i][j]=max(1,1-d[i][j]);
                else if(j==m-1)
                    d[i][j]=max(1,d[i+1][j]-d[i][j]);
                else if(i==n-1)
                    d[i][j]=max(1,d[i][j+1]-d[i][j]);
                else
                    d[i][j]=max(1,min(d[i+1][j],d[i][j+1])-d[i][j]);
            }
        }
        return d[0][0];
   
    }
};

