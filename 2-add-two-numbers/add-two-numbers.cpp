
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode *ans=new ListNode(NULL);
        ListNode *head=ans; 
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry)
        {
            int sum=carry;
            if(l1)
            {
            sum+=l1->val;l1=l1->next;}
            if(l2){
            sum+=l2->val;l2=l2->next;
            }
          carry=sum/10;
            int pres=sum%10;
            ans->next=new ListNode(pres);
            ans=ans->next;
        }
        return head->next;
    }
};