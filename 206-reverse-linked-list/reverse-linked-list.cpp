class Solution {
public:
    ListNode *func(ListNode *head)
    {
        if(head==NULL || head->next==NULL) return head;
        ListNode *node=func(head->next);
        head->next->next=head;
        head->next=NULL;
        return node;
    }
    ListNode* reverseList(ListNode* head) 
    {
      /*  ListNode *cur=head,*next=head,*prev=NULL;
        while(cur)
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;

      //in a recursion way*/
      return func(head);


        
    }
};