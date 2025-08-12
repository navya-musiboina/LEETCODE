class Solution {
public:
   int func(vector<vector<int>>& obstacleGrid,int i,int j,int n,int m,vector<vector<int>>&dp)
   {
    if(i>=n || j>=m) return 0;
    if(obstacleGrid[i][j]==1) return 0;
    if(i==n-1 && j==m-1) return 1;
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j]=func(obstacleGrid,i+1,j,n,m,dp)+func(obstacleGrid,i,j+1,n,m,dp);

   }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) 
    {
       int n=obstacleGrid.size();
       int m=obstacleGrid[0].size();
       vector<vector<int>>dp(n,vector<int>(m,-1));
       if(obstacleGrid[0][0]==1 || obstacleGrid[n-1][m-1]) return 0;
       return func(obstacleGrid,0,0,n,m,dp);
    }
};