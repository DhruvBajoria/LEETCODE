class Solution {
public:
    int minDeletions(string s) {
        int n=s.length();
        unordered_map<char,int>m;
        for(int i=0;i<n;i++)
            m[s[i]]++;
        int res=0;
        vector<int>help(n+1,0);
        for(auto x:m)
        {
            if(help[x.second]==false)
            {
                help[x.second]=true;
                continue;
            }
            else
            {
                int k=x.second;
                 while(k>0)
                 {
                     if(help[k]==true)
                         k--;
                     else
                         break;
                 }
                res+=x.second-k;
                help[k]=true;
           }
        }
        return res;  
    }
};

     