class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n=g.size(),m=s.size();
        int i=n-1,j=m-1;
        int cnt=0;
        while(i>=0&&j>=0)
        {
            if(s[j]>=g[i])
            {
                j--;
                i--;
                cnt++;
            }
            else
            {
                i--;
            }
        }
        return cnt;
    }
};