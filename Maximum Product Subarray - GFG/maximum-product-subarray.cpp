// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    long long ma=1,mi=1,res=1;
	    if(n==1)
	    return arr[0];
	    for(int i=0;i<n;i++)
	    {
	        long long x=arr[i];
	        if(x<0)
	        {
	        swap(ma,mi);
	        }
	        ma=max(x,ma*x);
	        mi=min(x,mi*x);
	        res=max(res,ma);
	    }
	    return res;
	    // code here
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends