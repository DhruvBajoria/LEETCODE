// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
/* Link list node */
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void push(struct Node** head_ref, int new_data)
{
   
    struct Node* new_node = new Node(new_data);
    
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
} 

int countTriplets(struct Node* head, int x) ;

/* Driver program to test count function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , x ,i , num;
        struct Node *head = NULL;
        cin>>n>>x;
        for(i=0;i<n;i++)
        {
            cin>>num;
            push(&head,num);
        }
 
    /* Check the count function */
    cout <<countTriplets(head, x)<< endl;
    }
    return 0;
}// } Driver Code Ends


//User function Template for C++

int countTriplets(struct Node* head, int x) 
{ 
    vector<int>v;
    Node* curr=head;
    while(curr)
    {
        v.push_back(curr->data);
        curr=curr->next;
    }
    int ans=0;
    for(int i=0;i<v.size();i++)
    {
        int ntgt=x-v[i];
        int k=i+1,j=v.size()-1;
        while(k<j)
        {
            if(v[k]+v[j]==ntgt)
            {
                ans++;
                k++;j--;
            }
            else if(v[k]+v[j]<ntgt)
            k++;
            else
            j--;
        }
    }
    return ans;
    // code here.
} 