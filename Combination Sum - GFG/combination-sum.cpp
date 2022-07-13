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
    void solve(vector<int>&a,int t,int i,vector<int>&h,vector<vector<int>>&v)
    {
        if(i==a.size())
        {
            if(t==0)
            {
                v.push_back(h);
            }
            return ;
        }
        
        if(a[i]<=t)
        {
            h.push_back(a[i]);
            solve(a,t-a[i],i,h,v);
            h.pop_back();
        }
         solve(a,t,i+1,h,v);
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        vector<vector<int>>v;
        vector<int>h;
        sort(A.begin(),A.end());
        A.erase(unique(A.begin(), A.end()), A.end());
        solve(A,B,0,h,v);
        
        return v;
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