// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// returns required number of subarrays
	int numOfsubarrays(int arr[], int n) {
	    int s=0,p=1,cnt=0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i;j<n;j++)
	        {
	            s+=arr[j];
	            p*=arr[j];
	            if(s==p)
	            cnt++;
	        }
	        s=0;
	        p=1;
	    }
	    return cnt;
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
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.numOfsubarrays(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends