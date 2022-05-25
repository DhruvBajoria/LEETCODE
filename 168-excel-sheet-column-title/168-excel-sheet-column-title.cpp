class Solution {
public:
    string convertToTitle(int columnNumber) {
       string res;
        while(columnNumber>0)
        {
            columnNumber--;
            int a=columnNumber%26;
            char b=65+a;
            res+=b;
            columnNumber/=26;
        }
        reverse(res.begin(),res.end());
        return res;

    }
};