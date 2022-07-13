// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    vector<vector<int>>ans;
    void solve(vector<int>&A,int n,int i,vector<int>&help)
    {
        if(i==n)
        {
            //if(help.size()>0)
            ans.push_back(help);
            return ;
        }
       
        help.push_back(A[i]);//pick
        solve(A,n,i+1,help);
        help.pop_back();//non pick
        solve(A,n,i+1,help);
        
        
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        vector<int>help;
        int n=A.size();
        //reverse(A.begin(),A.end());
        solve(A,n,0,help);
        sort(ans.begin(),ans.end());
        return ans;
        //code here
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends