class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>ans(n,0);
        ans[0]=1;
        for(int i=0;i<n;i++)
        {
            if(ans[i]==0)continue;
            int k=nums[i];
            for(int j=1;i+j<n && j<=k;j++)
                ans[i+j]=1;
        }
        return ans[n-1];
        
    }
};