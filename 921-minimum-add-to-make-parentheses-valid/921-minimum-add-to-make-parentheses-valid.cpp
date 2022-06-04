class Solution {
public:
    int minAddToMakeValid(string s) {
       stack<int>st;
        int cnt=0,c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                c++;
            else
            {
                if(c>0)
                    c--;
                else
                    cnt++;
            }
        }
        return c+cnt;
    }
};