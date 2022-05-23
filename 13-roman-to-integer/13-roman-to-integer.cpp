class Solution {
public:
    int romanToInt(string str) {
        unordered_map<char,int>m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        int n=str.length();
        int res=m[str[n-1]];
        for(int i=n-2;i>=0;i--)
        {
            if(m[str[i]]<m[str[i+1]])
            {
                res-=m[str[i]];
            }
            else
            {
                res+=m[str[i]];
            }
        }
        return res;
    }
};