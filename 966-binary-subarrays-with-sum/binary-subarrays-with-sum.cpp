class Solution {
public:
    int atleast(vector<int>&nums,int goal)
    {
        int ones=0,j=0,n=nums.size(),ans=0;
        for(int i=0;i<n;i++)
        {
           ones+=nums[i];
            while(j<=i && ones>=goal)
            {
                ans+=n-i;
              ones-=nums[j];
                j++;
            }
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) 
    {
        return atleast(nums,goal)-atleast(nums,goal+1);
    }
};