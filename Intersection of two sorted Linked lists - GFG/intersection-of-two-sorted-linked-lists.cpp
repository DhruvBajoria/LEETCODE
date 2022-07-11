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

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}
// } Driver Code Ends


/* The structure of the Linked list Node is as follows:

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

Node* findIntersection(Node* head1, Node* head2)
{
    Node*curr1=head1,*curr2=head2,*temp=NULL,*hed=NULL;
    while(curr1&&curr2)
    {
        if(curr1->data==curr2->data)
        {
            if(hed==NULL)
            {
                hed=curr1;
                temp=hed;
            }
            else
            {
                temp->next=curr1;
                temp=temp->next;
            }
            curr1=curr1->next;
            curr2=curr2->next;
        }
        else if(curr1->data<curr2->data)
        {
            curr1=curr1->next;
        }
        else if(curr2->data<curr1->data)
        {
              curr2=curr2->next;
        }
        /*if(temp!=NULL&&curr1!=NULL&&curr2!=NULL){
            cout<<curr1->data<<" "<<curr2->data<<" "<<temp->data<<endl;
            cout<<"temp"<<endl;
            Node* d = hed;
            while(d!=NULL){
                cout<<d->data<<endl;
                d = d->next;
            }
        }*/
        
    }
    temp->next = NULL;
    return hed;
    // Your Code Here
}