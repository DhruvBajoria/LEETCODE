class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        auto a=*max_element(nums.begin(),nums.end());
        auto b=*min_element(nums.begin(),nums.end());
       int h=0,hh=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==a)
            {
                h=i;
                break;
            }
        }
        // cout<<h<<endl;
          for(int i=0;i<n;i++)
        {
            if(nums[i]==b)
            {
                hh=i;
                break;
            }
        }
        // cout<<hh<<endl;
        int c=max(h+1,hh+1);
        int d=n-min(h,hh);
        int e=min(h+1,hh+1)+n-max(h,hh);
        return min(c,min(d,e));
    }
};