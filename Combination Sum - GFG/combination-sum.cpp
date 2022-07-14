// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int>>ans;
    void solve(vector<int>&a,int i,int sum,int n,int t,vector<int>&h)
    {
        
        if(sum==t)
        {
            ans.push_back(h);
            return;
        }
        if(sum>t)
        return;
        
        for(int j=i;j<n;j++)
        {
            if(j>i&&a[j]==a[j-1])
            continue;
            sum+=a[j];
            h.push_back(a[j]);
            solve(a,j,sum,n,t,h);
            sum-=a[j];
            h.pop_back();
        }
        
        
        
        
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        vector<int>h;
        int n=A.size();
        sort(A.begin(),A.end());
        solve(A,0,0,n,B,h);
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
        // Your code here
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}	  // } Driver Code Ends