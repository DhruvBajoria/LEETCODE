// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int* greaterElement(int arr[], int n);

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int *b;
        b = greaterElement(arr, n);
        for(int i=0;i<n;i++){
            if(b[i] == -10000000)
                cout << "_ ";
            else
                cout << b[i] << " ";
        }
        cout<<endl;   
        
    }
    return 0;
}
// } Driver Code Ends


int* greaterElement(int arr[], int n)
{
    map<int,int>mp;
    //vector<int>v(n,0);
    // int *v=new int[n];
    // for(int i=0;i<n;i++)
    // {
    //     mp[arr[i]]=i;
    // }
    // sort(arr,arr+n);
    // for(int i=0;i<n-1;i++)
    // {
    //     int h=mp[arr[i]];
    //     if(i+1==n)
    //     {
    //         v[h]=-10000000;
    //     }
    //     else
    //     {
    //     v[h]=arr[i+1];
    //     }
        
    // }
    // for(auto x:v)
    // {
    //     cout<<x<<" ";
    // }
    // cout<<endl;
   // return v;
   int a[n];
   map<int,int>m;
   for(int i=0;i<n;++i)
      a[i]=arr[i];
   sort(a,a+n);
   int top=a[n-1];
   m[top]=-10000000;
   for(int i=n-2;i>=0;--i){
       if(a[i]<top){
       m[a[i]]=top;
       }
       if(a[i]>a[i-1])
       top=a[i];
   }
   for(int i=0;i<n;++i)
   arr[i]=m[arr[i]];
   return arr;
    // Complete the function
}
