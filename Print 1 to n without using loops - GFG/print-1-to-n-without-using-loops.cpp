// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void printTillN(int N)
    {
         if(N==1)
    {
        cout<<'1'<<" ";
        return;
    }
    printTillN(N-1);
    cout<<N<<" ";
        // Write Your Code here
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        ob.printTillN(N);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends