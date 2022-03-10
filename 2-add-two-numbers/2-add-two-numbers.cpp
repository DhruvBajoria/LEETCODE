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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      
        ListNode* curr=NULL,*res=NULL,*temp=NULL;
        int sum=0,c=0;
        
        
        while(l1||l2)
        {
            sum=c+(l1?l1->val:0)+(l2?l2->val:0);
            c=(sum>=10?1:0);
            sum=sum%10;
            temp=new ListNode(sum);
            if(res==NULL)
            {
                res=temp;
                curr=res;
            }
            else{
                
                curr->next=temp;
                curr=curr->next;
            }
            if(l1)
                l1=l1->next;
            if(l2)
                l2=l2->next;
        }
       if(c>0)
       {
           temp=new ListNode(c);
           curr->next=temp;
           curr=temp;
       }
       
        return res;
    }
};