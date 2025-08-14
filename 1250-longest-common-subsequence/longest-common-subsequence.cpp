class Solution {
public:
    int func(string &text1,string &text2,int i,int j,int n,int m,vector<vector<int>>&dp)
    {
        if(i>=n || j>=m) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(text1[i]==text2[j])
        return dp[i][j]= 1+func(text1,text2,i+1,j+1,n,m,dp);
        else
        return dp[i][j]=max(func(text1,text2,i+1,j,n,m,dp),func(text1,text2,i,j+1,n,m,dp));
    }
    int longestCommonSubsequence(string text1, string text2) 
    {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return func(text1,text2,0,0,n,m,dp);
    }
};