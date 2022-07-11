// { Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}


 // } Driver Code Ends
/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        unordered_map<int,int>mp;
        Node*curr1=head2;
        while(curr1)
        {
            mp[curr1->data]=1;
            curr1=curr1->next;
        }
        
        Node* curr2=head1;
        Node* temp=NULL,*hed=NULL;
        while(curr2)
        {
            if(mp[curr2->data])
            {
                if(hed==NULL)
                {
                    hed=curr2;
                    temp=hed;
                }
                else
                {
                    temp->next=curr2;
                    temp=temp->next;
                }
            }
            curr2=curr2->next;
        }
        temp->next=NULL;
        return hed;
        // code here
        // return the head of intersection list
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    
	    cin>> n;
	    Node* head1 = inputList(n);
	    
	    cin>>m;
	    Node* head2 = inputList(m);
	    Solution obj;
	    Node* result = obj.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}
  // } Driver Code Ends