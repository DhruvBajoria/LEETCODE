// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> jugglerSequence(int n){
        vector<int>v;
        v.push_back(n);
        int i=0;
        while(true)
        {
            i++;
            if(v[i-1]==1)
            break;
            else if(v[i-1]%2)
            v.push_back(pow(v[i-1],1.5));
            else
            v.push_back(pow(v[i-1],0.5));
        }
        return v;
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
        
        Solution ob;
        vector<int> ans = ob.jugglerSequence(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends