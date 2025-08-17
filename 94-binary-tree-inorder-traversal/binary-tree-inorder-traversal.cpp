
class Solution {
public:
    
     vector<int>ans;
    vector<int> inorderTraversal(TreeNode* root) 
    {
        if(root==NULL) return ans;
      stack<TreeNode *>st;
      TreeNode *cur=root;
     
      while( cur || !st.empty())
      {
        while(cur)
        {
            st.push(cur);
            cur=cur->left;
        }
        TreeNode * node=st.top();
        st.pop();
        ans.push_back(node->val);
        cur=node->right;
      }
      return ans; 
    }
};
