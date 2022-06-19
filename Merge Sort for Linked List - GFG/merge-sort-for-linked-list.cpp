// { Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node *merge(Node*p,Node*q)
    {
        if(!p)
        return q;
        if(!q)
        return p;
        if(p->data<q->data)
        {
            p->next=merge(p->next,q);
            return p;
        }
        else
        {
            q->next=merge(p,q->next);
            return q;
        }
        return NULL;
    }
    Node* mergeSort(Node* head) {
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
        return merge(mergeSort(head),mergeSort(new_head));
        // your code here
    }
};


// { Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}  // } Driver Code Ends