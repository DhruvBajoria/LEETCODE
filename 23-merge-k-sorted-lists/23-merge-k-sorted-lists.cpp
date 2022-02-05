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
        if(!p)
            return q;
        if(!q)
            return p;
        ListNode* res=NULL;
        if(p->val<q->val)
        {
            res=p;
            res->next=merge(p->next,q);
        }
        else{
            res=q;
            res->next=merge(p,q->next);
        }
        return res;
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        int n=lists.size();
        if(n==0)
            return NULL;
        for(int i=1;i<n;i++)
        {
            lists[0]=merge(lists[0],lists[i]);
        }
        return lists[0];
        
        
    }
};