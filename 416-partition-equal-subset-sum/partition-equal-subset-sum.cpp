class Solution {
public:
    bool func(vector<int>&nums,int i,int target,vector<vector<int>>&dp)
    {
        if(i>=nums.size())return false;
        if(target==0) return true;
        if(dp[i][target]!=-1)return dp[i][target];
        int take=0,ntake=0;
        if(target-nums[i]>=0)
        take=func(nums,i+1,target-nums[i],dp);
        ntake=func(nums,i+1,target,dp);
        return dp[i][target]=take|ntake;

    }
    bool canPartition(vector<int>& nums) 
    {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2) return false;
        vector<vector<int>>dp(n,vector<int>(sum/2+1,-1));
        return func(nums,0,sum/2,dp);
    }
};