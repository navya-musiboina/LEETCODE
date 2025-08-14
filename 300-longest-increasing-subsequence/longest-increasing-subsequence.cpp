class Solution {
public:
    int func(vector<int>&nums,int i,int parent,vector<vector<int>>&dp)
    {
        if(i>=nums.size()) return 0;
        int take=0,ntake=0;
        if(dp[i][parent+1]!=-1) return dp[i][parent+1];
        if(parent==-1 || nums[i]>nums[parent])
        take=1+func(nums,i+1,i,dp);
        ntake=func(nums,i+1,parent,dp);
        return  dp[i][parent+1]=max(take,ntake);
    }
    int lengthOfLIS(vector<int>& nums) 
    {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return func(nums,0,-1,dp);   
    }
};