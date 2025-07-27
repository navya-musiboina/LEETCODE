class Solution {
public:
    int func(vector<int>&nums,int sum,int i,int target)
    {
       
       if(i>=nums.size()) 
       return target==sum;
       int pos=0,neg=0;
       pos=func(nums,sum+nums[i],i+1,target);
       neg=func(nums,sum-nums[i],i+1,target);
       return pos+neg;
      
    }
    int findTargetSumWays(vector<int>& nums, int target) 
    {

        return func(nums,0,0,target);
        
    }
};