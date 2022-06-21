/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode*head)
    {
        ListNode*prev=NULL,*next=NULL,*curr=head;
        while(curr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    int getDecimalValue(ListNode* head) {
        head=reverse(head);
        ListNode* help=head;
        int sum=0,n=0;
        while(help)
        {
            int a=help->val;
            if(a==1)
            sum+=pow(2,n);
            n++;
            help=help->next;
        }
        return sum;
    }
};