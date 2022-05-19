class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>v;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            int a=*min_element(matrix[i].begin(),matrix[i].end());
            v.push_back(a);
        }
     // vector<vector<int>>mm;
    vector<int>u;
        for(int i=0;i<m;++i)
        {
            vector<int>s;
            
            for(int j=0;j<n;++j)
            {
                s.push_back(matrix[j][i]);
              
            }
            int b=*max_element(s.begin(),s.end());
            u.push_back(b);
        }
        // vector<int>u;
        //    for(int i=0;i<m;i++)
        // {
        //     int a=*max_element(mm[i].begin(),mm[i].end());
        //     u.push_back(a);
        // }
        vector<int>ans;
        unordered_map<int,int>ma;
        for(auto x:v)
        {
            ma[x]++;
        }
        for(auto x:u)
        {
            if(ma[x]>=1)
                ans.push_back(x);
        }
        return ans;
    }
};