class Solution {
public:
    int func(string &text1,string &text2,int i,int j,int n,int m,vector<vector<int>>&dp)
    {
        if(i>=n || j>=m) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(text1[i]==text2[j])
        return dp[i][j]= 1+func(text1,text2,i+1,j+1,n,m,dp);
        else
        {
           int lh=0,rh=0;
           lh=func(text1,text2,i+1,j,n,m,dp);
           rh=func(text1,text2,i,j+1,n,m,dp);
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