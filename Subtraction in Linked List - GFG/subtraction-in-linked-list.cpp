// { Driver Code Starts
// driver

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
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
    cout<< endl;
}

Node* subLinkedList(Node* l1, Node* l2);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        
        Node* res = subLinkedList(first,second);
        printList(res);
    }
    return 0;
}
// } Driver Code Ends


/* Structure of linked list Node

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

//You are required to complete this method
Node *biggerll(Node* l1,Node *l2)
{
    while(l2!=NULL)
    {
        if(l1->data>l2->data)
        return l1;
        else if(l1->data<l2->data)
        return l2;
        else
        {
            l1=l1->next;
            l2=l2->next;
        }
    }
    return l1;
}
Node *reverse(Node* head)
{
    Node *curr=head,*prev=NULL,*next=NULL;
    while(curr)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
Node* subLinkedList(Node* l1, Node* l2)
{
    while(l1->next!=NULL&&l1->data==0)
    {
        l1=l1->next;
    }
     while(l2->next!=NULL&&l2->data==0)
    {
        l2=l2->next;
    }
    Node *curr1=l1,*curr2=l2;
    
    int c1=0,c2=0;
    while(curr1)
    {
       c1++;
       curr1=curr1->next;
    }
    while(curr2)
    {
        c2++;
        curr2=curr2->next;
    }
    if(c1<c2||(c1==c2 && l2==biggerll(l1,l2)))
    {
        Node *t=l1;
        l1=l2;
        l2=t;
    }
    
    l1=reverse(l1);
    l2=reverse(l2);
    
    Node *newhead=NULL,*prev=NULL;
    bool bor=false;
    int diff=0;
    while(l1||l2)
    {
        if(bor)
        {
            l1->data=l1->data-1;
            bor=false;
        }
        if(l1!=NULL&& l2!=NULL &&l1->data<l2->data)
        {
            l1->data=l1->data+10;
            bor=true;
        }
        if(l1->data<0)
        {
            bor=true;
            l1->data+=10;
        }
        diff=(l1!=NULL?l1->data:0)-(l2!=NULL?l2->data:0);
        Node *node=new Node(diff);
        if(newhead==NULL)
        {
            newhead=node;
            //prev=newhead;
        }
        else
        {
            prev->next=node;
        }
        prev =node;
        if(l1)
        l1=l1->next;
        if(l2)
        l2=l2->next;
    }
    prev->next=NULL;
    newhead=reverse(newhead);
    while(newhead->next!=NULL&&newhead->data==0)
    {
        newhead=newhead->next;
    }
    return newhead;
    //Your code here
}