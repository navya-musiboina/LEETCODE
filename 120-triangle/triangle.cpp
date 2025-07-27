class Solution {
public:
    int func(vector<vector<int>>& triangle,int i,int j,int n,vector<vector<int>>&dp)
    {
      //  if(i>=n || j>=triangle[i].size()) return INT_MAX;
        if(i==n-1) return dp[i][j]=triangle[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int lh=func(triangle,i+1,j,n,dp);
        int rh=func(triangle,i+1,j+1,n,dp);
        return  dp[i][j]=triangle[i][j]+min(lh,rh);
    }
    int minimumTotal(vector<vector<int>>& triangle) 
    {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
       // return func(triangle,0,0,n,dp);
        for(int i=0;i<n;i++)
        dp[n-1][i]=triangle[n-1][i];
        for(int i=n-2;i>=0;i--)
        {
            for(int j=i;j>=0;j--)
            {
            int lh=dp[i+1][j];
            int rh=dp[i+1][j+1];
            dp[i][j]=triangle[i][j]+min(lh,rh);
            }
        }
        return dp[0][0];

    }
};