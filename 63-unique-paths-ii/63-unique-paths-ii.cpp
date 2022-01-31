class Solution {
public:
    // int f(int i,int j,vector<vector<int>>&a,vector<vector<int>>&dp)
    // {
    //     if(i>=0&&j>=0&&a[i][j]==1)
    //         return 0;
    //     if(i==0&&j==0)
    //         return 1;
    //     if(i<0||j<0)
    //         return 0;
    //     if(dp[i][j]!=-1)
    //         return dp[i][j];
    //     int up=f(i-1,j,a,dp);
    //     int left=f(i,j-1,a,dp);
    //     return dp[i][j]=left+up;
    // }
    int uniquePathsWithObstacles(vector<vector<int>>& a) {
        int n=a.size();
        int m=a[0].size();
        
        vector<vector<int>>dp(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==1)
                    dp[i][j]=0;
                else if(i==0&&j==0)
                    dp[i][j]=1;
                else{
                    int up=0,left=0;
                    if(i>0)
                        up=dp[i-1][j];
                     if(j>0)
                         left=dp[i][j-1];
                    dp[i][j]=up+left;
                }
                
                
            }
        }
        return dp[n-1][m-1];
        // return f(n-1,m-1,a,dp);
    }
};