
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) 
    {
        vector<int>ans;
        if(root==NULL) return ans;
        stack<TreeNode *>s1,s2;
        s2.push(root);
        while(!s2.empty())
        {
            TreeNode *node=s2.top();
            s2.pop();
            if(node->left)
            s2.push(node->left);
            if(node->right)
            s2.push(node->right);
            s1.push(node);
        }
        while(!s1.empty())
        {
            ans.push_back(s1.top()->val);
            s1.pop();
        }
        return ans;
    }
};