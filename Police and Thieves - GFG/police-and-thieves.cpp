// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int catchThieves(char arr[], int n, int k) 
    {
        vector<int>p,t;
        for(int i=0;i<n;i++)
        {
            if(arr[i]=='T')
            t.push_back(i);
            else
            p.push_back(i);
        }
        int i=0,j=0,ans=0;
        while(i<p.size()&&j<t.size())
        {
            if(abs(p[i]-t[j])<=k)
            {
                ans++;
                i++;
                j++;
            }
            else if(p[i]>t[j])
            {
                j++;
            }
            else
            {
                i++;
            }
            
        }
        
        return ans;
        
        // Code here 
    }
};

// { Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n >> k;
		char arr[n];
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
		Solution obj;
		cout<<obj.catchThieves(arr, n, k) << endl;
	}
	return 0; 
} 

  // } Driver Code Ends