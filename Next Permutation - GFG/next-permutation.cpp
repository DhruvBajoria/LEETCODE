// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
      int b=-1;
      for(int i=N-1;i>0;i--)
      {
          if(arr[i]>arr[i-1])
          {
              b=i-1;
              break;
          }
      }
      if(b<0)
      {
          reverse(arr.begin(),arr.end());
          return arr;
      }
      
          for(int i=N-1;i>=0;i--)
          {
              if(arr[i]>arr[b])
              {
                  swap(arr[i],arr[b]);
                  reverse(arr.begin()+b+1,arr.end());
                  break;
              }
          }
      
        return arr;
        
        // code here
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends