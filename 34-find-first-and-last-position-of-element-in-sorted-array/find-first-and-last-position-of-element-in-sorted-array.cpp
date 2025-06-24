class Solution {
public:
   int lower(vector<int>&nums,int target)
   {
    int start=0,end=nums.size()-1;
    int ans=-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(nums[mid]==target)
        {
            ans=mid;
            end=mid-1;
        }
       else  if(nums[mid]>target)
            end=mid-1;
        else
        start=mid+1;
    }
    return ans;
   }
   int upper(vector<int>&nums,int target)
   {
    int ans=-1;
    int start=0,end=nums.size()-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        
        if(nums[mid]==target)
        {
            ans=mid;
            start=mid+1;
        }
        if(nums[mid]>target)
        end=mid-1;
        if(nums[mid]<target)
        start=mid+1;
        
    }
    return ans;
   }
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int index=lower(nums,target);
        int index2=upper(nums,target);
        return {index,index2};
    }
};