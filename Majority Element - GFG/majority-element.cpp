// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int n)
    {
     int cnt=1;
     int ans=arr[0];
     for(int i=1;i<n;i++)
     {
         if(ans==arr[i])
         {
             cnt++;
         }
         else
         {
             cnt--;
             if(cnt==0)
             {
                 ans=arr[i];
                 cnt=1;
             }
         }
     }
        int freq=0;
        for(int i=0;i<n;i++)
        {
            if(ans==arr[i])
            freq++;
            if(freq>n/2)
            return ans;
        }
      return -1;  // your code here
        
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends