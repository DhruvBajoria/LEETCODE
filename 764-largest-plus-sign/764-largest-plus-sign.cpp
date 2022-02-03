class Solution {
public:
    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
        vector<vector<int>>dp(n,vector<int>(n,1));
        for(auto a:mines)
        {
            int x=a[0];
            int y=a[1];
            dp[x][y]=0;
        }
        
        
        vector<vector<int>>top,bot,lef,rgh;
        top=bot=lef=rgh=dp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int x=n-i-1;
                int y=n-1-j;
                if(i>0&&top[i][j])
                    top[i][j]+=top[i-1][j];
                if(j>0&&lef[i][j])
                    lef[i][j]+=lef[i][j-1];
                if(x<n-1&&bot[x][y])
                    bot[x][y]+=bot[x+1][y];
                if(y<n-1&&rgh[x][y])
                    rgh[x][y]+=rgh[x][y+1];
            }
        }
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans=max(ans,min({lef[i][j],top[i][j],rgh[i][j],bot[i][j]}));
            }
        }
        return ans;
    }
};