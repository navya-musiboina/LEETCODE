class Solution {
public:
    ListNode* oddEvenList(ListNode* head) 
    {
        
        if(head==NULL || head->next==NULL) return head;
         ListNode *odd=head;
        ListNode *even=head->next;
        ListNode *dum1=odd,*dum2=even;
        while(odd && odd->next && even && even ->next)
        {
            odd->next=odd->next->next;
            odd=odd->next;
            even->next=even->next->next;
            even=even->next;
        }
        odd->next=dum2;
        return dum1;
    }
};