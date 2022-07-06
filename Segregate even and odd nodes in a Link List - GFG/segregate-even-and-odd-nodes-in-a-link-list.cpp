// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        Node*ostart=NULL,*estart=NULL,*ot=NULL,*et=NULL,*curr=head;
        while(curr)
        {
            if(curr->data%2)
            {
                if(ostart==NULL)
                {
                    ostart=curr;
                    ot=ostart;
                }
                else
                {
                    ot->next=curr;
                    ot=curr;
                }
            }
            else
            {
                 if(estart==NULL)
                {
                    estart=curr;
                    et=estart;
                }
                else
                {
                    et->next=curr;
                    et=curr;
                }
            }
            curr=curr->next;
        }
        if(et==NULL)
        return ostart;
        et->next=ostart;
        if(ot!=NULL)
        ot->next=NULL;
        return estart;
        // code here
    }
};

// { Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}
  // } Driver Code Ends