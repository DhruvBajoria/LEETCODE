class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int>dp;
        dp.push_back(1);
        dp.push_back(1);
        int i=2,cnt=0;
       for(i=2;;i++)
       {
           if(dp[i-1]+dp[i-2]>k)
               break;
           dp.push_back(dp[i-1]+dp[i-2]);
       }
        int j=dp.size()-1;
       while(k&&j>0)
       {
           if(dp[j]<=k)
           {
               cnt++;
               k-=dp[j];
               
           }
           j--;
       }
        return cnt;
    }
};