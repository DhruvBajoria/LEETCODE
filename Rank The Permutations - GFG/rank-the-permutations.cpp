// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int rank(string S){
       string k =S;
    sort(k.begin() , k.end());
       
    unordered_set<char>s;
    for(char ch:k) s.insert(ch);
    
    if(S.size()!=s.size()) return 0;
      
    int ans=1;
    while(k!=S)
    {
       next_permutation(k.begin() , k.end());
       ans++;
       ans=ans%1000003; 
    }
    return ans%1000003; // code here
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.rank(S)<<endl;
    }
    return 0;
}  // } Driver Code Ends