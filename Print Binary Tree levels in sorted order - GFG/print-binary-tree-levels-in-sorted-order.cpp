// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    vector <vector <int>> binTreeSortedLevels (int arr[], int n)
    {
        vector<vector<int>>v;
        
        int range=0;
        vector<int>h;
      for(int i=0;i<n;i++)
      {
          h.push_back(arr[i]);
          if(i==n-1||i==range)
          {
              sort(h.begin(),h.end());
              v.push_back(h);
              range=2*(i+1);
              h.clear();
          }
      }
       return v; // Your code here
    }
};

// { Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin >> arr[i];

        Solution ob;
        
		vector <vector <int>> res = ob.binTreeSortedLevels (arr, n);
		for (int i = 0; i < res.size(); ++i)
		{
			for (int j = 0; j < res[i].size(); ++j)
			{
				cout << res[i][j] << " ";
			}
			cout << endl;
		}
	}
}

// Contributed By: Pranay Bansal  // } Driver Code Ends