class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        string a=s.substr(0,n/2);
        string b=s.substr(n/2,n);
        int c1=0,c2=0;
        for(auto x:a)
        {
            if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
                c1++;
        }
         for(auto x:b)
        {
            if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
                c2++;
        }
        return c1==c2;
    }
};