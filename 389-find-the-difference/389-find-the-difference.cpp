class Solution {
public:
    char findTheDifference(string s, string t) {
        int h1[26]={0};
        for(int i=0;i<t.length();i++)
            h1[t[i]-'a']++;
        for(int i=0;i<s.length();i++)
            h1[s[i]-'a']--;
        for(int i=0;i<26;i++)
        {
            if(h1[i]==1)
                return 'a'+i;
        }
        return ' ';
    }
};