class Solution {
public:
    int atleast(vector<int>&nums,int k)
    {
        int n=nums.size(),count=0,j=0,odd=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]&1)
            odd++;
            while(odd>=k)
            {
                count+=(n-i);
                if(nums[j]&1)
                  odd--;
                  j++;
            }
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) 
    {
        return atleast(nums,k)-atleast(nums,k+1);
        
    }
};