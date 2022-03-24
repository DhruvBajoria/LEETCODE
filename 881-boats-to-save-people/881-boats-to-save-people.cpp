class Solution {
public:
    int numRescueBoats(vector<int>& p, int l) {
        
        sort(p.begin(),p.end());
        int i=0,j=p.size()-1;
        int cnt=0;
        
        while(i<=j)
        {
            cnt++;
            if(p[i]+p[j]<=l)
                i++;
            j--;
        }
        return cnt;
    }
};