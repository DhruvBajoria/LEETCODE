class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0,ma=INT_MIN;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
         ma=max(ma,sum);
       // cout<<ma<<endl;
        for(int i=k;i<nums.size();i++)
        {
            sum+=(nums[i]-nums[i-k]);
            ma=max(ma,sum);
            //cout<<ma<<endl;
        }
        
        return (double)ma/k;
        
        
    }
};