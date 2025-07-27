class Solution {
public:
    int func(vector<int>&nums,int i,vector<int>&dp)
    {
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int take=0,ntake=0;
        take=nums[i]+func(nums,i+2,dp);
        ntake=func(nums,i+1,dp);
        return dp[i]=max(take,ntake);

    }
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>dp(n,-1);
        return func(nums,0,dp);
    }
};