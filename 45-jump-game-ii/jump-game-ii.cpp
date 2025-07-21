class Solution {
public:
    int jump(vector<int>& nums) 
    {
        int n=nums.size();

        vector<int>ans(n,0);
        ans[0]=1;
        for(int i=0;i<n;i++)
        {
            int k=nums[i];
            if(ans[i]==0)continue;
            for(int j=1; i+j<n && j<=k;j++)
            {
                if(ans[i+j]!=0)continue;
                ans[i+j]=1+ans[i];
            }
        }
        return ans[n-1]-1;
    }
};