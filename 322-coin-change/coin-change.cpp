class Solution {
public:
  
    int func(vector<int>&coins,int i,int amount,vector<vector<int>>&dp)
    {
        if(amount==0) return 0;
        if(i>=coins.size()) return INT_MAX;
        int take=INT_MAX,ntake=0;
        if(dp[i][amount]!=-1) return dp[i][amount];
        if(amount-coins[i]>=0)
        {
        take=func(coins,i,amount-coins[i],dp);
        if(take!=INT_MAX)
        take++;
        }
        ntake=func(coins,i+1,amount,dp);
        return  dp[i][amount]=min(take,ntake);
    }
    int coinChange(vector<int>& coins, int amount) 
    {
       int n=coins.size();
       vector<vector<int>>dp(n,vector<int>(amount+1,-1));
       int k=func(coins,0,amount,dp);
       if(k==INT_MAX) return -1;
       return k;
    }
};