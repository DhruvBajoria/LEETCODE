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
    ListNode* mergeTwoLists(ListNode* p, ListNode* q) {
        ListNode* res=NULL;
        if(!p)
            return q;
        else if(!q)
            return p;
        else if(p->val<q->val)
        {
            res=p;
            res->next=mergeTwoLists(p->next,q);
        }
        else
        {
            res=q;
            res->next=mergeTwoLists(p,q->next);
        }
        return res;
        
        
    }
};