class Solution {
public:
   
     int atleast(vector<int>&nums,int k)
     {
        int count=0,ans=0,j=0,n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]&1)count++;
            while(count>=k)
            {
                ans+=(n-i);
                if(nums[j]&1)
                count--;
                j++;
            }
        }
        return ans;
     }
    int numberOfSubarrays(vector<int>& nums, int k) 
    {
        return atleast(nums,k)-atleast(nums,k+1);
    }
};