class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) 
 {
    int n=nums.size();
    vector<map<int,int>>dp(n);
    int maxi=2;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            int dif=nums[i]-nums[j];
            dp[i][dif]=2;
          if(dp[j].find(dif)!=dp[j].end())
            dp[i][dif]=1+dp[j][dif];
            maxi=max(maxi,dp[i][dif]);
        }
    }
    return maxi;
}
};