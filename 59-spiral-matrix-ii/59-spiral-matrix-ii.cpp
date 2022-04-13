class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int> (n));
        int row=0,col=0,r=n,c=n;
        int count=1;
        
        while(row<r&&col<c)
        {
            for(int i=col;i<c;i++)
            {
                ans[row][i]=count++;
            }
            row++;
            for(int i=row;i<r;i++)
            {
                ans[i][c-1]=count++;
                
            }
            c--;
            if(row<r)
            {
                for(int i=c-1;i>=col;--i)
                {
                    ans[r-1][i]=count++;
                }
                r--;
            }
            if(col<c)
            {
                for(int i=r-1;i>=row;--i)
                {
                    ans[i][col]=count++;
                }
                col++;
            }
        }
        return ans;
    }
};