class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& grid, int k) {
          int sz = grid.size() ; 
        priority_queue<pair<int,int>> maxh;
        
        for(int i=0; i<sz; i++)
        {
            int soldiers = count(grid[i].begin(), grid[i].end(), 1);
            maxh.push(make_pair(soldiers, i)) ;
            
            if(maxh.size()>k){ maxh.pop() ;}
        }
        
        vector<int> res ;
        while(!maxh.empty())
        {
            res.push_back(maxh.top().second) ; maxh.pop() ; 
        }
        reverse(res.begin(), res.end()) ;
        return res ;
    }
};