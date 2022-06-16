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
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head,*slow=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode *prev=NULL,*next=NULL,*curr=slow;
        while(curr)
        {
            next=curr->next;;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        fast=head;
        while(prev)
        {
            if(fast->val!=prev->val)
                return false;
            prev=prev->next;
            fast=fast->next;
        }
        return true;
        
    }
};