class Solution {
public:
    int maximalSquare(vector<vector<char>>& M) {
       int n=M.size();
        if(n==0)
            return 0;
        int m=M[0].size();
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        int largest=0;
        for(int i=1;i<=n;++i)
        {
            for(int j=1;j<=m;++j)
            {
                if(M[i-1][j-1]=='1')
                {
                    dp[i][j]=1+min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
                    largest=max(largest,dp[i][j]);
                }
            }
        }
        return largest*largest;
    }
};