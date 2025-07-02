class Solution {
public:
   
    TreeNode *func(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if( root==NULL||  root==p || root==q)
        return root;

        TreeNode *lh=func(root->left,p,q);
        TreeNode *rh=func(root->right,p,q);
        if(lh && rh) return root;
        if(lh) return lh;
        return rh;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        return func(root,p,q);
    }
};