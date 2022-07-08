// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int minimumCostOfBreaking(vector<int> X, vector<int> Y, int M, int N){
        int ans=0;
        int v=1,h=1;
        sort(X.begin(),X.end());
        sort(Y.begin(),Y.end());
        int n1=X.size(),n2=Y.size();
        int i=n1-1,j=n2-1;

        while(i>=0||j>=0)
        {
            if(X[i]>Y[j])
            {
                ans+=v*X[i];
                i--;
              
                h++;
            }
            else
            {
                ans+=h*Y[j];
                j--;
                
                v++;
            }
            
            
        }
        // while(i>=0)
        // {
        //     ans+=v*X[i];
        //     i--;
        // }
        // while(j>=0)
        // {
        //     ans+=h*Y[j];
        //     j--;
        // }
        return ans;
        //Write your code here
    }
};



// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int m, n;
	    cin >> m >> n;
	    vector<int>X(m - 1), Y(n - 1);
	    for(int i = 0; i < m - 1; i++){
	        cin >> X[i];
	    }
	    for(int i = 0; i < n - 1; i++){
	        cin >> Y[i];
	    }
	    Solution ob;
	    int ans = ob.minimumCostOfBreaking(X, Y, m - 1, n - 1);
	    cout << ans<<endl;
	}
	return 0;
}
  // } Driver Code Ends