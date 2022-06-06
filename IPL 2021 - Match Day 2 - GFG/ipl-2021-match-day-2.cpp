// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
   priority_queue<int>pq;
   priority_queue<int>help;
   vector<int>v;
   for(int i=0;i<k;i++)
   {
       pq.push(arr[i]);
   }
   v.push_back(pq.top());
   for(int i=k;i<n;i++)
   {
       if(pq.top()==arr[i-k])
       pq.pop();
       else
       help.push(arr[i-k]);
       while(!help.empty()&&help.top()==pq.top())
       {
           help.pop();
           pq.pop();
       }
       pq.push(arr[i]);
       v.push_back(pq.top());
   }
   return v;
   
        // your code here
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}  // } Driver Code Ends