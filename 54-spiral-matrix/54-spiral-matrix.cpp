class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int r=m.size();
        int c=m[0].size();
        int row=0,col=0;
        vector<int>v;
        while(row<r && col<c)
        {
            for(int i=col;i<c;i++)
            {
                v.push_back(m[row][i]);
            }
            row++;
             for(int i=row;i<r;i++)
            {
                v.push_back(m[i][c-1]);
            }
            c--;
            if(row<r)
            {
              for(int i=c-1;i>=col;--i)
            {
                v.push_back(m[r-1][i]);
            }
            r--;
            }
            
            if(col<c)
            {
             for(int i=r-1;i>=row;--i)
            {
                v.push_back(m[i][col]);
            }
            col++;
            }
        }
        return v;
        
    }
};