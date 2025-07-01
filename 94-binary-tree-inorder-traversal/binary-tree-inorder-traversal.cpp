
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) 
    {
        stack<TreeNode*>st;
        
        TreeNode *cur=root;
        vector<int>ans;
        while(cur || !st.empty())
        {
            while(cur!=NULL)
            {
                st.push(cur);
                cur=cur->left;
            }
           cur=st.top();
            st.pop();
            ans.push_back(cur->val);
            cur=cur->right;
        }
        return ans;
    }
};
