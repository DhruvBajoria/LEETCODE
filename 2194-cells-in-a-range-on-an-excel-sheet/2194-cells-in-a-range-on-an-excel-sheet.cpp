class Solution {
public:
    vector<string> cellsInRange(string s) {
        char a=s[0];
        char b=s[3];
        int c=s[1];
        int d=s[4];
        int aa=c;
        vector<string>v;
        for(char i=a;i<=b;i++)
        {
            while(c<=d)
            {
                string temp=i+to_string(c-48);
                c++;
                v.push_back(temp);
            }
            c=aa;
        }
        return v;
    }
};