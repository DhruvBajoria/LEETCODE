class Solution {
public:
    int maximalrect(vector<int>&dp)
    {
        stack<int>st;
        st.push(-1);
        int maxi=0;
        for(int i=0;i<=dp.size();i++)
        {
            int val=(i==dp.size())?-1:dp[i];
            while(st.top()!=-1&&dp[st.top()]>val)
            {
                int height=dp[st.top()];
                st.pop();
                int width=i-st.top()-1;
                maxi=max(maxi,width*height);
            }
            st.push(i);
        }
        return maxi;
        
    }
    int maximalRectangle(vector<vector<char>>& g) {
        int n=g.size();
        if(n==0)
            return 0;
        int m=g[0].size();
        if(n+m==2)
            return g[0][0]=='1';
        vector<int>dp(m,0);
        int res=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]=='0')
                    dp[j]=0;
                else
                     dp[j]++;
            }
            res=max(res,maximalrect(dp));
        }
        return res;
        
    }
};