class Solution {
public:
    string getSmallestString(int n, int k) {
        string s;
        
        for(int i=0;i<n;i++)
        {
            s+='a';
        }
        k-=n;
        for(int i=n-1;i>=0;i--)
        {
            if(k==0)
                return s;
            if(k<25)
            {
                s[i]='a'+k;
                k=0;
            }
            else
            {
                s[i]='z';
                k-=25;
            }
        }
        return s;
    }
};