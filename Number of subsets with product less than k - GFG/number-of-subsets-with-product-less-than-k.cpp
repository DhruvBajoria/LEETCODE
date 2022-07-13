// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  int solve(int arr[],int n,int k,int i,int m)
  {
      if(m>k)return 0;
      if(i==n)return 1;
      
      
      int l=solve(arr,n,k,i+1,m*arr[i]);
      int r=solve(arr,n,k,i+1,m);
      return l+r;
  }
    int numOfSubsets(int arr[], int N, int K) {
        return solve(arr,N,K,0,1)-1;
        // code here
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>K;

        Solution ob;
        cout << ob.numOfSubsets(arr,N,K) << endl;
    }
    return 0;
}  // } Driver Code Ends