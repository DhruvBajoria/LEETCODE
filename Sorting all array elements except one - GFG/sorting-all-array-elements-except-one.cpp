// { Driver Code Starts
// CPP program to sort all elements except
// element at index k.
#include <bits/stdc++.h>
using namespace std;

int* sortExceptK(int arr[], int n, int k);


// Driver code
int main()
{
	int t,k,n;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        int *ans;
        ans = sortExceptK(arr, n, k);
    	for (int i = 0; i < n; i++)
    		cout << ans[i] << " ";
		cout<<endl;
    }

}
// } Driver Code Ends


int* sortExceptK(int arr[], int n, int k)
{
        if(n>1){
        int val;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(i==k){
                val=arr[i];
            }
            else{
                ans.push_back(arr[i]);
            }
        }
        sort(ans.begin(),ans.end());
        for(int i=n-1;i>k;i--){
            ans[i]=ans[i-1];
        }
        ans[k]=val;
        for(int i=0;i<n;i++){
            arr[i]=ans[i];
        }
        }
        return arr;


	// Complete the function
}
