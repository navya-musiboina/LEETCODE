class Solution {
public:
 //total-min(subarray);
 

    int kadanes(vector<int>&nums)
    {
        int sum=0,maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            maxi=max(maxi,sum);
            if(sum<0)
            sum=0;
        }
        return maxi;
    }
    int minikadanes(vector<int>&nums)
    {
        int sum=0,mini=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            mini=min(mini,sum);
            if(sum>0)
            sum=0;
        }
        return mini;
    }
    int maxSubarraySumCircular(vector<int>& nums) 
    {
        int n=nums.size();
        int total=accumulate(nums.begin(),nums.end(),0);
        int maxi=kadanes(nums);
        int mini=minikadanes(nums);
        if(maxi<0) return maxi;
        return max(total-mini,maxi);
    }
};