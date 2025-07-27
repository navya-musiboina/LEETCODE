class Solution {
public:
    int func(string &s, string &t,int i,int j,int n,int m,vector<vector<int>>&dp)
    {
        if(i>=n || j>=m) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j])
        return dp[i][j]=1+func(s,t,i+1,j+1,n,m,dp);
        else
        {
            int lh=0,rh=0;
            lh=func(s,t,i+1,j,n,m,dp);
            rh=func(s,t,i,j+1,n,m,dp);
            return dp[i][j]=max(lh,rh);
        }
    }
    int longestCommonSubsequence(string text1, string text2) 
    {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return func(text1,text2,0,0,n,m,dp);
    }
};