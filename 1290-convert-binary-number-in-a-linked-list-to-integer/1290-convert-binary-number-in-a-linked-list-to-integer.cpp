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
    int getDecimalValue(ListNode* head) {
        ListNode* next=NULL,*prev=NULL,*curr=head;
        while(curr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        int sum=0,n=0;
        while(prev)
        {
            if(prev->val==1)
            {
                sum+=pow(2,n);
            }
            n++;
            prev=prev->next;
        }
        return sum;
        
    }
};