class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b)
    {
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ans=0;
        sort(boxTypes.begin(),boxTypes.end(),comp);
        for(auto &x:boxTypes)
        {
            int h=min(x[0],truckSize);
            ans+=h*x[1];
            truckSize-=h;
            if(!truckSize)
                break;
        }
        return ans;
    }
};