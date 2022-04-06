class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& ind) {
        vector<vector<int>>v(m,vector<int>(n,0));
        for(int i=0;i<ind.size();i++)
        {
            for(int ii=0;ii<m;ii++)
            {
                v[ii][ind[i][1]]++;
            }
             for(int ii=0;ii<n;ii++)
            {
                v[ind[i][0]][ii]++;
            }
        }
        
        int cnt=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<v[i][j];
                if(v[i][j]%2)
                    cnt++;
            }
            cout<<endl;
        }
        return cnt;
    }
};