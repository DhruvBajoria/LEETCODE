class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int n=cost.size();
        int j=n-1;
       // int ans=0;
        if(n==1)
            return cost[0];
        if(n==2)
            return cost[0]+cost[1];
        int sum=0;
        reverse(cost.begin(),cost.end());
        for(int i=0;i<n;i++)
            sum+=cost[i];
        for(int i=2;i<n;i+=3)
            sum-=cost[i];
        
       //   for(int i=0;i<n;i+=3)
       //   {
       //       ans+=cost[i]+cost[i+1];
       //   }
        return sum;
    }
};