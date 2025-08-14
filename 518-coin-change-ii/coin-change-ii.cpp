class Solution {
public:
    int func(int amount,vector<int>&coins,int i,vector<vector<int>>&dp)
    {
      if(i>=coins.size())
      return amount==0;
      if(dp[i][amount]!=-1) return dp[i][amount];
      int take=0,ntake=0;
      if(amount-coins[i]>=0)
      take=func(amount-coins[i],coins,i,dp);
      ntake=func(amount,coins,i+1,dp);
      return  dp[i][amount]=take+ntake;
    }
    int change(int amount, vector<int>& coins) 
    {
       int n=coins.size();
       vector<vector<int>>dp(n,vector<int>(amount+1,-1));
       return func(amount,coins,0,dp);
    }
};