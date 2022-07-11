// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}




 // } Driver Code Ends
//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    Node *merge(Node*p,Node*q)
    {
        if(!p)
        return q;
        if(!q)
        return p;
        Node*res;
        if(p->data<q->data)
        {
            res=p;
            res->next=merge(p->next,q);
            
        }
        else
        {
            res=q;
            res->next=merge(p,q->next);
           
        }
        return res;
    }
    Node* insertionSort(struct Node* head)
    {
         if(head==NULL||head->next==NULL)
        return head;
        Node *slow=head,*fast=head;
        while(fast&&fast->next&&fast->next->next)
        {
             slow=slow->next;
             fast=fast->next->next;
        }
        Node* new_head=slow->next;
        slow->next=NULL;
        return merge(insertionSort(head),insertionSort(new_head));
        
        //code here
    }
    
};

// { Driver Code Starts.
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		cin >> n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < n; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Solution ob;

		head = ob.insertionSort(head);
		printList(head);

		cout << "\n";



	}
	return 0;
}  // } Driver Code Ends