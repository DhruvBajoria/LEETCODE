class Solution {
public:
    int maxPoints(vector<vector<int>>& p) {
        int n=p.size();
        if(n<=2)
            return n;
        int t=2;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int total=2;
                for(int k=0;k<n;k++)
                {
                    if(i!=k&&j!=k)
                    {
                        if(((p[j][1]-p[i][1])*(p[k][0]-p[i][0]))==((p[k][1]-p[i][1])*(p[j][0]-p[i][0])))
                            total++;
                    }
                }
                t=max(t,total);
            }
        }
        return t;
    }
};