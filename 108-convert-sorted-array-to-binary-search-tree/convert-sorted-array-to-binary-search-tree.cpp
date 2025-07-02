
class Solution {
public:  
    TreeNode *func(vector<int>&nums,int start,int end)
    {
        if(start>end) return NULL;
        int mid=(start+end)/2;
        TreeNode *root=new TreeNode(nums[mid]);
        root->left=func(nums,start,mid-1);
        root->right=func(nums,mid+1,end);

        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        int n=nums.size();
        int start=0,end=n-1;
        return func(nums,0,end);
    }
};