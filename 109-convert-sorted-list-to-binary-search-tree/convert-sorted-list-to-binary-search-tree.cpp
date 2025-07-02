class Solution {
public:
    TreeNode *func(ListNode *head)
    {
        if(head==NULL) return NULL;
        if(head->next==NULL) return new TreeNode(head->val);
        ListNode *slow=head,
        *fast=head,
        *prev=NULL;
        while(fast && fast->next)
        {
              prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=NULL;
       TreeNode * root=new TreeNode(slow->val);

        root->left=func(head);
        root->right=func(slow->next);

        return root;

    }
    TreeNode* sortedListToBST(ListNode* head) 
    {
        return func(head);
        
    }
};