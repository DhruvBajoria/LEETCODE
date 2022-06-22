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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head||!head->next)
            return head;
        ListNode *dummy=new ListNode(-1);
        dummy->next=head;
        ListNode *temp=dummy;
        ListNode *prevt=NULL;
        for(int i=0;i<left;i++)
        {
            prevt=temp;
            temp=temp->next;
        }
        
        ListNode *curr=temp,*prev=NULL,*next=NULL;
        for(int i=left;i<=right;i++)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        prevt->next=prev;
        temp->next=curr;
        return dummy->next;
        
    }
};