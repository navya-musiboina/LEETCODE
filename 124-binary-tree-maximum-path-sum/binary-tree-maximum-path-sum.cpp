
class Solution {
public:
int maxi=INT_MIN;
    int func(TreeNode *root)
    {   
        if(root==NULL) return 0;
        int lh=max(0,func(root->left));
        int rh=max(0,func(root->right));
        maxi=max(maxi,root->val+lh+rh);
        return max(root->val+lh,root->val+rh);
    }
    int maxPathSum(TreeNode* root) 
    {
        func(root);
        return maxi;

    }
};