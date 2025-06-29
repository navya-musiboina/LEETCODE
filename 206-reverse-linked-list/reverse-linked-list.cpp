class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        ListNode *cur=head,*next=head,*prev=NULL;
        while(cur)
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;

        
    }
};