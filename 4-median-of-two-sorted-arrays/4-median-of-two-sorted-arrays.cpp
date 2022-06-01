class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(auto x:nums1)
        {
            v.push_back(x);
        }
           for(auto x:nums2)
        {
            v.push_back(x);
        }
        int n=v.size();
        sort(v.begin(),v.end());
        if(n%2==1)
            return v[n/2];
        return (double)(v[n/2-1]+v[n/2])/2;
    }
};