
class Solution {
public:
  bool func(TreeNode *root,int target)
  {
    if(root==NULL) return false;
    if(root->left==NULL && root->right==NULL)
        return target-root->val==0?true:false;
     return func(root->left,target-root->val)||
     func(root->right,target-root->val);
  }
    bool hasPathSum(TreeNode* root, int targetSum) 
    {
        return func(root,targetSum);   
    }
};