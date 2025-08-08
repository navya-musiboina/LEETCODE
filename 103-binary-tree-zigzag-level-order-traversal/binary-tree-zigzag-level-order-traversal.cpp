class Solution 
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {

        vector<vector<int>>res;
        int zig=0;
        if(root==NULL) return res;
        queue<TreeNode *>pq;
        pq.push(root);
        while(!pq.empty())
        {
            int size=pq.size();
            vector<int>sub(size);
            for(int i=0;i<size;i++)
            {
                int n=zig?size-i-1:i;
                TreeNode *node=pq.front();pq.pop();
                sub[n]=node->val;
               
                if(node->left)
                pq.push(node->left);
                if(node->right)
                pq.push(node->right);
            }
            zig=!zig;
        res.push_back(sub);
        }
        return res;

    }


};