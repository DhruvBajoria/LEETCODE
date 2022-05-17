class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
       int r=m.size();
        int c=m[0].size();
        int i=0,j=c-1;
        while(i<r&&j>=0)
        {
            if(m[i][j]==target)
                return true;
            else if(m[i][j]<target)
                i++;
            else
                j--;
        }
        return false;
    }
};