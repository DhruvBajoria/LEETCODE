class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int cnt=0,m=0;
        for(int i=0;i<s.size();i++)
        {
            for(auto x:s[i])
            {
                if(x==' ')
                    cnt++;
            }
            
            m=max(m,cnt+1);
            cnt=0;
        }
        return m;
    }
};