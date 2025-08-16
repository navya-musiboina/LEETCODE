class Solution {
public:
    int atleast(vector<int>&nums,int goal)
    {
        int sum=0,j=0,count=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            sum++;
            while(j<=i && sum>=goal)
            {
                count+=(n-i);
                sum-=nums[j];
                j++;
            }
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) 
    {
      int n=nums.size();
      return atleast(nums,goal)-atleast(nums,goal+1);

    }
};