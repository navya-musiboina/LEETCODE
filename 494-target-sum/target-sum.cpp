class Solution {
public:
    int func(vector<int>&nums,int i,int sum,int target)
    {
      
        if(i>=nums.size())
        {
            return target==sum;
        }
        int pos=0,neg=0;
        pos=func(nums,i+1,sum+nums[i],target);
        neg=func(nums,i+1,sum-nums[i],target);
        return pos+neg;
      
    }
    int findTargetSumWays(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int k=func(nums,0,0,target);
        return k;
    }
};