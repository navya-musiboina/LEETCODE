class Solution {
public:
     int atleast(vector<int>&nums,int k)
     {
        map<int,int>mpp;
        int j=0,count=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
            while(mpp.size()>=k)
            {
                count+=n-i;
                mpp[nums[j]]--;
                if(mpp[nums[j]]==0)
                mpp.erase(nums[j]);
                j++;
            }
        }
        return count;
     }
    int subarraysWithKDistinct(vector<int>& nums, int k) 
    { 
        return atleast(nums,k)-atleast(nums,k+1);
    }
};