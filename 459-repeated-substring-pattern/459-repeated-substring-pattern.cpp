class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.length();
         string help=s+s;
        string a=help.substr(1,2*n-2);
        return a.find(s)!=-1;
    }
};