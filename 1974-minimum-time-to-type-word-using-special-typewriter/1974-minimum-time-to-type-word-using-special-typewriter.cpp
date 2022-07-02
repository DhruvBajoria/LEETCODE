class Solution {
public:
    int minTimeToType(string word) {
        int n=word.length();
        int ans=n;
        char b='a';
        for(int i=0;i<n;i++)
        {
            char c=word[i];
            ans+=min(abs(c-b),26-abs(c-b));
            b=c;
        }
        return ans;
    }
};