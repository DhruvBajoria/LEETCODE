class Solution {
public:
    int titleToNumber(string columnTitle) {
    int n=columnTitle.size();
        int count=0,ans=0;
        for(int i=n-1;i>=0;i--)
        {
            ans+=(columnTitle[i]-64)*pow(26,count);
            count++;
        }
        return ans;
    }
};