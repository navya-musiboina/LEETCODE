class Solution {
public:
     
    int atleast(vector<int>&nums,int k)
    {
        map<int,int>mpp;
        int j=0,ans=0;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
            while(mpp.size()>=k)
            {
            ans+=(nums.size()-i);
            mpp[nums[j]]--;
            if(mpp[nums[j]]==0)
            mpp.erase(nums[j]);
            j++;
            }
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) 
    {
        int n=nums.size();
        return atleast(nums,k)-atleast(nums,k+1);
        
    }
};