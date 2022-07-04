class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            if(grid[i][0]==0)
            {
                for(int j=0;j<m;j++)
                {
                    grid[i][j]=1-grid[i][j];
                }
            }
        }
        
        for(int j=0;j<m;j++)
        {
            int c1=0,c2=0;
            for(int i=0;i<n;i++)
            {
                if(grid[i][j]==1)
                    c1++;
                else if(grid[i][j]==0)
                    c2++;
            }
            if(c2>c1)
            {
                for(int i=0;i<n;i++)
                {
                    grid[i][j]=1-grid[i][j];
                }
            }
        }
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         cout<<grid[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int temp=0,p=0;
            for(int j=m-1;j>=0;j--)
            {
                temp+=grid[i][j]*pow(2,p);
                p++;
            }
            ans+=temp;
        }
        return ans;
        
        
        
    }
};