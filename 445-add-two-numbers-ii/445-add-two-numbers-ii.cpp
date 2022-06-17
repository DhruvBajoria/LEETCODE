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
        ListNode *prev=NULL,*next=NULL,*curr=head;
        while(curr)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        ListNode*dummy=new ListNode(-1);
        ListNode*temp=dummy;
        int c=0,s=0;
        while(l1||l2||c)
        {
            if(l1)
            {
                s+=l1->val;
                l1=l1->next;
            }
             if(l2)
            {
                s+=l2->val;
                l2=l2->next;
            }
            s+=c;
            c=s/10;
            s=s%10;
            ListNode *help=new ListNode(s);
            temp->next=help;
            temp=temp->next;
            s=0;
        }
        return reverse(dummy->next);
    }
};