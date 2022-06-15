class Solution {
public:
    int nthUglyNumber(int n) {
         vector<int>dp = { 1 };
        
        int c2 = 0, c3 = 0, c5 = 0;
        
        int i = 1; //i is starting  from 1 because we've already added 1 element in list
        
        while(i < n) {
            int next = min({ 2*dp[c2], 3*dp[c3], 5*dp[c5] });
            dp.push_back(next);
            if(next == 2*dp[c2]) c2++;
            if(next == 3*dp[c3]) c3++;
            if(next == 5*dp[c5]) c5++;
            i++;
        }
        
        return dp.back();
    }
};