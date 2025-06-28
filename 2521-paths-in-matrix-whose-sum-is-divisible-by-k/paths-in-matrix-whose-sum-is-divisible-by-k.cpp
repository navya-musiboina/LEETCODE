class Solution {
public:
int mod=1e9+7;
int n,m;
    int func(vector<vector<int>>&grid,int k,int i,int j,int sum,vector<vector<vector<int>>>&dp)
    {
        if(i>=n || j>=m)  return 0;
        sum=(sum+grid[i][j])%k;
        if(i==n-1 && j==m-1)
        {
            if(sum==0)
            return 1;
            return 0;
        }
         if(dp[i][j][sum]!=-1) return dp[i][j][sum];
    return dp[i][j][sum]=(func(grid,k,i+1,j,sum,dp)+func(grid,k,i,j+1,sum,dp))%mod;
    }
    int numberOfPaths(vector<vector<int>>& grid, int k) 
    {
         n=grid.size();
         m=grid[0].size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(k+1,-1)));
      return  func(grid,k,0,0,0,dp);
    }
};
