// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxNumbers(int n, int k, int a[]){
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        int ans=0,i=1,c=0;
        while(i)
        {
            if(mp.find(i)==mp.end())
            {
               c+=i;
               ans++;
              
            }
            i++;
            if(c>k)
            break;
        }
        return ans-1;
        // code here
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        
        Solution ob;
        cout<<ob.maxNumbers(n, k, a)<<"\n";
    }
    return 0;
}  // } Driver Code Ends