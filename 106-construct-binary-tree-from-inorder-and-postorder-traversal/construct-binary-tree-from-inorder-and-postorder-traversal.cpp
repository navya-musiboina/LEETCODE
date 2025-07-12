
class Solution {
public:  
    TreeNode *create(vector<int>&inorder,int is,int ie,vector<int>&postorder,int ps,int pe,map<int,int>&mpp)
    {
        if(is>ie || ps>pe) return NULL;
        TreeNode *root=new TreeNode(postorder[pe]);
        int inloc=mpp[root->val];
        int dif=inloc-is;
        root->left=create(inorder,is,inloc-1,postorder,ps,ps+dif-1,mpp);
        root->right=create(inorder,inloc+1,ie,postorder,ps+dif,pe-1,mpp);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) 
    {
        map<int,int>mpp;
        int n=inorder.size();
        for(int i=0;i<n;i++)
        mpp[inorder[i]]=i;
        return create(inorder,0,n-1,postorder,0,n-1,mpp);
    }
};