class Solution {
public:
    int dp[50][50][50];
    vector<vector<int>>grid;
    int solve(int r1,int c1,int c2,int n)
    {
        int r2=r1+c1-c2;
        if(r1>=n||r2>=n||c1>=n||c2>=n||grid[r1][c1]==-1||grid[r2][c2]==-1)
            return INT_MIN;
        if(dp[r1][c1][c2]!=-1)
            return dp[r1][c1][c2];
        
        if(r1==n-1 && c1==n-1)
            return grid[r1][c1];
        
        int ans=grid[r1][c1];
        if(c1!=c2)
            ans+=grid[r2][c2];
        int temp=max(solve(r1,c1+1,c2+1,n),solve(r1+1,c1,c2+1,n));
        temp=max(temp,solve(r1,c1+1,c2,n));
        temp=max(temp,solve(r1+1,c1,c2,n));
        ans+=temp;
        return dp[r1][c1][c2]=ans;
            
    }
    int cherryPickup(vector<vector<int>>& g) {
        int n=g.size();
        
        grid=g;
        memset(dp,-1,sizeof(dp));
        return max(0,solve(0,0,0,n));

    }
};
//[[1,1,1,1,0,0,0],[0,0,0,1,0,0,0],[0,0,0,1,0,0,1],[1,0,0,1,0,0,0],[0,0,0,1,0,0,0],[0,0,0,1,0,0,0],[0,0,0,1,1,1,1]]