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
    
    ListNode* merge(ListNode* p,ListNode* q)
    {
        if(p==NULL)
            return q;
        if(q==NULL)
            return p;
        if(p->val<q->val)
        {
            p->next=merge(p->next,q);
            return p;
        }
        else{
            q->next=merge(p,q->next);
            return q;
        }
        return NULL;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode *fast=head,*slow=head;
        
        while(fast&&fast->next&&fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            
        }
        
        ListNode* new_head=slow->next;
        slow->next=NULL;
        
        return merge(sortList(head),sortList(new_head));
            
        
    }
};