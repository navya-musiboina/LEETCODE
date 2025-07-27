class Solution {
public:
    int func(vector<vector<int>>& matrix, int i, int j, int n, int m, vector<vector<int>>& dp) {
        if (i >= n || j >= m || j < 0) return INT_MAX;
        if (i == n - 1) return matrix[i][j];
        if (dp[i][j] != -1) return dp[i][j];
        
        int lh = func(matrix, i + 1, j - 1, n, m, dp);
        int rh = func(matrix, i + 1, j, n, m, dp);
        int ph = func(matrix, i + 1, j + 1, n, m, dp);
        
        return dp[i][j] = matrix[i][j] + min({lh, rh, ph});
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        for(int i=0;i<m;i++)
        dp[0][i]=matrix[0][i];
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int rh=dp[i-1][j];
                int ph=(j-1>=0)?dp[i-1][j-1]:INT_MAX;
                int lh=(j+1<m)?dp[i-1][j+1]:INT_MAX;
                dp[i][j]=matrix[i][j]+min({rh,ph,lh});
            }
        }
        return *min_element(dp[n-1].begin(),dp[n-1].end());




    }
};
