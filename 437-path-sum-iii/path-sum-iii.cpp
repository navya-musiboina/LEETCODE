
class Solution {
public:
     int func(TreeNode *root,int targetSum,long long sum,map<long long,int>&mpp)
     {
        if(root==NULL) return 0;
        sum=(long long)sum+root->val;
        int count=mpp[sum-targetSum];
        mpp[sum]++;
        count+=func(root->left,targetSum,sum,mpp);
        count+=func(root->right,targetSum,sum,mpp);
        mpp[sum]--;
        return count;
     }
    int pathSum(TreeNode* root, int targetSum) {
        map<long long,int>mpp;
        mpp[0]=1;
        return func(root,targetSum,0,mpp);
    }
};