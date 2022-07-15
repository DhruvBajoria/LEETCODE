// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    void sort(int arr[], int n)
    {
        priority_queue<int>pq;
        for(int i=0;i<n;i++)
        {
            pq.push(arr[i]);
        }
        int i=n-1;
        while(!pq.empty())
        {
            arr[i--]=pq.top();
            pq.pop();
        }
        
        // your code here
    }
};

// { Driver Code Starts.
void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}


// Driver program to test above functions
int main()
{
    int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin >> arr[i];
		Solution ob;
		ob.sort (arr, n);
		print (arr, n);
		cout << endl;
	}
}



  // } Driver Code Ends