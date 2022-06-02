// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
     vector<long long>NSL(long long a[],int n)
    {
        vector<long long>v;
        stack<pair<long long,int>>st;
        for(int i=0;i<n;i++)
        {
            if(st.size()==0)
            v.push_back(-1);
            else if(st.size()>0&&st.top().first<a[i])
            {
                v.push_back(st.top().second);
            }
            else if(st.size()>0&&st.top().first>=a[i])
            {
                while(st.size()>0&&st.top().first>=a[i])
                {
                    st.pop();
                }
                if(st.size()==0)
                {
                    v.push_back(-1);
                }
                else
                {
                    v.push_back(st.top().second);
                }
            }
            st.push({a[i],i});
        }
        return v;
    }
      vector<long long>NSR(long long a[],int n)
    {
        vector<long long>v;
        
        stack<pair<long long,int>>st;
        for(int i=n-1;i>=0;i--)
        {
            if(st.size()==0)
            v.push_back(n);
            else if(st.size()>0&&st.top().first<a[i])
            {
                v.push_back(st.top().second);
            }
            else if(st.size()>0&&st.top().first>=a[i])
            {
                while(st.size()>0&&st.top().first>=a[i])
                {
                    st.pop();
                }
                if(st.size()==0)
                {
                    v.push_back(n);
                }
                else
                {
                    v.push_back(st.top().second);
                }
            }
            st.push({a[i],i});
        }
        reverse(v.begin(),v.end());
        return v;
    }
    long long getMaxArea(long long arr[], int n)
    {
        vector<long long>a=NSL(arr,n);
        vector<long long>b=NSR(arr,n);
        vector<long long>width(n);
        for(int i=0;i<n;i++)
        {
            width[i]=b[i]-a[i]-1;
        }
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,width[i]*arr[i]);
        }
        return ans;
        // Your code here
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends