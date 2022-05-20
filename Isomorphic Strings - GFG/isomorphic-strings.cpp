// { Driver Code Starts
// C++ program to check if two strings are isomorphic
#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string s1, string s2)
    {
     int l1=s1.length();
        int l2=s2.length();
        int m1[256]={0};
        int m2[256]={0};
        if(l1!=l2)
        return false;
        for(int i=0;i<l1;i++)
        {
            if(!m1[s1[i]] and !m2[s2[i]])
            {
                m1[s1[i]]=s2[i];
                m2[s2[i]]=s1[i];
            }
            else if(m1[s1[i]]!=s2[i])
            return false;
        }
        return true; // Your code here
        
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends