class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int cnt=1;
        if(arr[0]!=0)
        {
            arr[0]=1;
            
        }
        for(int i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]>1)
            {
                arr[i]=arr[i-1]+1;
              ;
            }
        }
        return arr[arr.size()-1];
    }
};