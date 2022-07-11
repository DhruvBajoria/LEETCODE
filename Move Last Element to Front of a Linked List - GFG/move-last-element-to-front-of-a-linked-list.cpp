// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class ListNode{
public:
    int val;
    ListNode *next;
    ListNode(int x){
        val=x;
        next=NULL;
    }
};


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        ListNode*second_last=NULL,*last=head;
        while(last->next!=NULL)
        {
            second_last=last;
            last=last->next;
        }
        if(second_last==NULL)
        return head;
        
        second_last->next=NULL;
        last->next=head;
        return last;
      
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ListNode*> a(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[i]=new ListNode(x);
            if(i!=0){
                a[i-1]->next=a[i];
            }
        }
        ListNode *head=a[0];
        Solution ob;
        head=ob.moveToFront(head);
        while(head!=NULL){
            cout<<head->val;
            if(head->next!=NULL){
                cout<<" ";
            }
            head=head->next;
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Endshttps://practice.geeksforgeeks.org/problems/move-last-element-to-front-of-a-linked-list/1/?page=5&category[]=Linked%20List&sortBy=submissions#