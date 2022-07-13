// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long countSubsets(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        cout << countSubsets(a, n) << endl;
    }

    return 0;
}// } Driver Code Ends


// User function Template for C++

long long countSubsets(int a[], int n) {
    set<int>s;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            s.insert(a[i]);
        }
    }
    long long aa=1;
    for(int i=0;i<s.size();i++)
    {
        aa=aa<<1;
    }
    return aa-1;
}