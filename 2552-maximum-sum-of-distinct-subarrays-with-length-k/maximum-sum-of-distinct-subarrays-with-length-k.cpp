class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) 
    {
        int n=nums.size();
        map<int,int>mpp;
        long long j=0,sum=0,maxi=0;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
            sum+=nums[i];
         while(mpp[nums[i]]>1)
         {
            mpp[nums[j]]--;
            if(mpp[nums[j]]==0)
            mpp.erase(nums[j]);
               sum-=nums[j];
            j++;
         
         }
         if(i-j+1==k)
         {
            maxi=max(maxi,sum);
            mpp[nums[j]]--;
            if(mpp[nums[j]]==0) mpp.erase(nums[j]);
        sum-=nums[j];
         j++;
         }
        }
        return maxi;

        
    }
};