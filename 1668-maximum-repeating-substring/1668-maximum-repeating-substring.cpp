class Solution {
public:
    int maxRepeating(string s, string w) {
        int n=s.length();
        int m=w.length();
        int l=n/m;
        string a;
        int ma=0;
        for(int i=0;i<l;i++)
        {
            a+=w;
            if(s.find(a)!=-1)
            {
                ma=max(ma,i+1);
            }
        }
    return ma;
    }
};