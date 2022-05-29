// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        set<vector<int>>s;
        int n=arr.size();
        for(int i=0;i<=n-3;i++)
        {
            for(int j=i+1;j<=n-2;j++)
            {
                int l=j+1,h=n-1;
                int sum=arr[i]+arr[j];
                while(l<h)
                {
                    if(arr[l]+arr[h]+sum==k)
                    {
                        s.insert({arr[i],arr[j],arr[l],arr[h]});
                        l++;
                        h--;
                    }
                    else if(arr[l]+arr[h]+sum>k)
                    {
                        h--;
                    }
                    else
                    {
                        l++;
                    }
                }
            }
        }
        vector<vector<int>>v;
        for(auto x:s)
        {
            v.push_back(x);
        }
        return v;// Your code goes here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends