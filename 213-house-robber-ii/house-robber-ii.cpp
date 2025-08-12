class Solution {
public:
    int func(vector<int>&nums,int i,int n,vector<int>&dp)
    {
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        int lh=nums[i]+func(nums,i+2,n,dp);
        int rh=func(nums,i+1,n,dp);
        return dp[i]=max(lh,rh);

        
    }
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int>dp(n,-1);
        int lh=func(nums,0,n-1,dp);
        vector<int>dp2(n,-1);
        int rh=func(nums,1,n,dp2);
        return max(lh,rh);
    }
};