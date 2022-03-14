class Solution {
public:
    bool checkValid(vector<vector<int>>& m) {
         int n=m.size();
      
        map<int,int>ma;
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<n;j++)
           {
               int a=m[i][j];
               ma[a]++;
           }
            for(auto x:ma)
            {
                if(x.second!=1)
                    return false;
               
            }
              ma.clear();
        }
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<n;j++)
           {
               int a=m[j][i];
               ma[a]++;
           }
            for(auto x:ma)
            {
                if(x.second!=1)
                    return false;
               
            }
              ma.clear();
        }
        return true;
    }
};