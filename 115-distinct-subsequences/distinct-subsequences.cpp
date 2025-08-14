class Solution {
public:
  
   int mod=1e9+7;
    int func(string s,string t,int i,int j,int n,int m,vector<vector<int>>&dp)
    {
        if(j>=m) return 1;
       if(i>=n) return 0;
       if(dp[i][j]!=-1) return dp[i][j];
       int tak=0,ntak=0;
       if(s[i]==t[j])
       tak=func(s,t,i+1,j+1,n,m,dp);
       ntak=func(s,t,i+1,j,n,m,dp);
       return  dp[i][j]=tak+ntak;


    }
    int numDistinct(string s, string t) 
    {
      long long  n=s.size();
       long long m=t.size();
       vector<vector<long long>>dp(n+1,vector<long long>(m+1,0));
      
      for(int i=0;i<=n;i++)
      dp[i][0]=1;

      for(int i=1;i<=n;i++)
      {
        for(int j=1;j<=m;j++)
        {
            dp[i][j]=dp[i-1][j];
            if(s[i-1]==t[j-1])
            dp[i][j]= ( dp[i][j]+dp[i-1][j-1]) %mod;
        }
      }
      return dp[n][m];


    }
};
