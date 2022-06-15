#include<bits/stdc++.h>
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        int i=0,j=0,res=INT_MIN;
        int n=nums.size();
        while(j<n)
        {
            sum+=nums[j];
            if(j-i+1<k)
                j++;
            else if(j-i+1==k)
            {
                if(sum>res)
                    res=sum;
                sum-=nums[i];
                i++;
                j++;
            }
            
        }
        return (double)res/k;
    }
};