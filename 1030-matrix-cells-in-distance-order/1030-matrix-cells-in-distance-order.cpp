class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rcenter, int ccenter) {
        vector<vector<int>>v;
        vector<int>v1;
        priority_queue<pair<int,vector<int>>>pq;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                int a=abs(rcenter-i)+abs(ccenter-j);
                v1.push_back(i);
                v1.push_back(j);
                pq.push({a,v1});
                  v1.clear();
            }
          
        }
        while(!pq.empty())
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};