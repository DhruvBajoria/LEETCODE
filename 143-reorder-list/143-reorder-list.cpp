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
    void reorderList(ListNode* head) {
        // if(head==NULL&&head->next==NULL)
        //     return head;
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast&&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=NULL,*next=NULL,*curr=slow->next;
        slow->next=NULL;
        while(curr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        ListNode* s=head,*e=prev;
        while(e)
        {
            ListNode* t1=s->next,*t2=e->next;
            s->next=e;
            e->next=t1;
            s=t1;
            e=t2;
        }
    }
};