class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
       int sum = 0;
    
    for (int i = 0; i < grid.size(); ++i)
    {
        for(int j = 0; j < grid[i].size(); ++j)
        {
            sum += 6 * grid[i][j] - 2 * min(grid[i][j], j + 1 >= grid[i].size() ? 0 : grid[i][j+1]) - max(0, 2 * (grid[i][j] - 1));
        }
    }
    
    for(int i = 1; i < grid.size(); ++i)
    {
        for(int j = 0; j < grid[i].size(); ++j)
        {
            sum -= 2 * min(grid[i - 1][j], grid[i][j]);
        }
    }

    return sum;
        
    }
};