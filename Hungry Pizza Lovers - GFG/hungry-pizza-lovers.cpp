// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> permute(vector<vector<int>> &arr, int n);


int main() {
    
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> arr(n);
        
        for(int i=0;i<n;i++)
        {
            int a, b;
            cin>> a>> b;
            arr[i].push_back(a);
            arr[i].push_back(b);
        }
        
        vector<int> ans;
        ans = permute(arr, n);
        for(int i=0;i<n;i++)
            cout << ans[i] << "\n";
        
    }
    
	return 0;
}// } Driver Code Ends

static bool comp(pair<int,int>a,pair<int,int>b)
{
    if(a.first==b.first)
    return a.second<b.second;
    return a.first<b.first;
}
vector<int> permute(vector<vector<int>> &arr, int n)
{
   vector<int>help,v;
   for(int i=0;i<n;i++)
   {
       help.push_back(arr[i][0]+arr[i][1]);
   }
   vector<pair<int,int>>vu;
   for(int i=0;i<n;i++)
   {
      // cout<<help[i]<<" ";
       vu.push_back({help[i],i+1});
   }
 
   sort(vu.begin(),vu.end(),comp);
   for(auto x:vu)
   {
       v.push_back(x.second);
   }
   return v;
    // Complete the function
    
}