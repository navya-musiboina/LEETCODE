
class Solution {
public:
   TreeNode *create(vector<int>& preorder,int ps,int pe,vector<int>&inorder,int is,int ie,map<int,int>&mpp)
   {
    if(is>ie || ps>pe) return NULL;
    TreeNode *root= new TreeNode(preorder[ps]);
    int inloc=mpp[root->val];
    int dif=inloc-is;
    root->left=create(preorder,ps+1,ps+dif,inorder,is,inloc-1,mpp);
    root->right=create(preorder,ps+dif+1,pe,inorder,inloc+1,ie,mpp);
    return root;
   }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
        map<int,int>mpp;
        int n=inorder.size();
        for(int i=0;i<n;i++)
        mpp[inorder[i]]=i;
        return create(preorder,0,n-1,inorder,0,n-1,mpp);
    }
};