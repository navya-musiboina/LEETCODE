class Solution 
{

public:
   int depth(TreeNode *root)
   {
    if(root==NULL)
    return 0;
    int lh=depth(root->left);
    int rh=depth(root->right);
    return 1+max(lh,rh);
   }
     TreeNode *ans(TreeNode *root,int maxi,int count)
     {
        if(root==NULL) return NULL;
        if(count==maxi)
        return root;
        TreeNode *left=ans(root->left,maxi,count+1);
        TreeNode *right=ans(root->right,maxi,count+1);
        if(left && right)
        return root;
        return left?left:right;
     }

    TreeNode* lcaDeepestLeaves(TreeNode* root) 
    {
        if(root==NULL)
        return NULL;
        int maxi=depth(root);

        return ans(root,maxi,1);

        
    }
};