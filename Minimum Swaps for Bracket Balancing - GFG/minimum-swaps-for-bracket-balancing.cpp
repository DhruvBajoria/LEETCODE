// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int minimumNumberOfSwaps(string S){
       int swap=0,x=0;
        for(int i=0;i<S.size();i++){
            if(S[i]=='['){
                x--;
            }else{
                x++;
                if(x>0){
                    swap+=x;
                }
            }
        }
        return swap;
        // code here 
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
}   // } Driver Code Ends