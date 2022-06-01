class Solution {
public:
    bool isvalid(vector<int>nums,int n,int m,int ma)
    {
        int sum=0;
        int subarray=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>ma)
                return false;
            else if(sum+nums[i]<=ma)
                sum+=nums[i];
            else
            {
                subarray++;
                sum=nums[i];
            }
        }
        return (subarray<=m);
    }
    int splitArray(vector<int>& nums, int m) {
        int n=nums.size();
        int l=0;
        int r=(int)(1e9+1);
        while(l<r)
        {
            int mid=l+(r-l)/2;
            if(isvalid(nums,n,m,mid))
            {
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};