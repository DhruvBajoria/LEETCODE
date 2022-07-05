class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int ar) {
        int n=rocks.size();
        vector<int>v(n,0);
        for(int i=0;i<capacity.size();i++)
        {
            v[i]=capacity[i]-rocks[i];
        }
        
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0)
                continue;
            else
            {
                int a=min(ar,v[i]);
                v[i]-=a;
                ar-=a;
            }
        }
        int cnt=0;
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0)
                cnt++;
        }
        return cnt;
    }
};