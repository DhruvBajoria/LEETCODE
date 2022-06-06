class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int n=stations.size();
        int r=startFuel;
        int ans=0;
        int i=0;
        priority_queue<int>pq;
        while(r<target)
        {
            while(i<n&&r>=stations[i][0])
            {
                pq.push(stations[i][1]);
                i++;
            }
            if(pq.size()==0)
                return -1;
            r+=pq.top();
            pq.pop();
            ans++;
        }
        return ans;
    }
};