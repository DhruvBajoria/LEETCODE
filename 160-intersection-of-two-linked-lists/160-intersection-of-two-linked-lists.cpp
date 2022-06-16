/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int count(ListNode* head)
    {
        if(head==NULL)
          return 0;
        int cnt=0;
        ListNode*curr=head;
        while(curr)
        {
            curr=curr->next;
            cnt++;
        }
        return cnt;

    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int c1=count(headA);
        int c2=count(headB);
        int c=abs(c1-c2);
        ListNode* curr1=headA,*curr2=headB;
        if(c1>c2)
        {
            for(int i=0;i<c;i++)
            {
                curr1=curr1->next;
            }
        }
          if(c1<c2)
        {
            for(int i=0;i<c;i++)
            {
                curr2=curr2->next;
            }
        }
        while(curr1||curr2)
        {
            if(curr1==curr2)
                return curr1;
            curr1=curr1->next;
            curr2=curr2->next;
        }
        return NULL;
    }
};