// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    void solve(int n,int s,int d,int h,long long &moves)
    {
        if(n==1)
        {
            cout<<"move disk 1 from rod "<<s<<" to rod "<<d<<endl;
            moves++;
            return ;
        }
        
        solve(n-1,s,h,d,moves);
        moves++;
        cout<<"move disk "<<n<< " from rod "<<s<<" to rod "<<d<<endl;
        solve(n-1,h,d,s,moves);    
    }
    
    
    long long toh(int N, int s, int d, int h) {
        long long moves=0;
        solve(N,s,d,h,moves);
        return moves;
        // Your code here
    }

};

// { Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}


//Position this line where user code will be pasted.  // } Driver Code Ends