class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int m=1000000007;
        int n=arr.size();
        int ans=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            int t=target-arr[i];
            int j=i+1,k=n-1;
            while(j<k)
            {
                if(arr[j]+arr[k]<t)
                {
                    j++;
                }
                else if (arr[j]+arr[k]>t)
                {
                    k--;
                }
                else if(arr[j]!=arr[k])
                {
                    int l=1,r=1;
                    while(arr[j]==arr[j+1]&&j+1<k)
                    {
                        l++;
                        j++;
                    }
                     while(arr[k]==arr[k-1]&&k-1>j)
                    {
                        r++;
                        k--;
                    }
                    ans+=l*r;
                    ans%=m;
                    j++;
                    k--;
                }
                else
                {
                    ans+=(k-j)*(k-j+1)/2;
                    ans%=m;
                    break;
                }
                    
                    
            }
        }
        return ans;
    }
};