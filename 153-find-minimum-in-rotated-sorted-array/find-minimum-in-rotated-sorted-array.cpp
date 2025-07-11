class Solution {
public:
    int findMin(vector<int>& nums)
    {
        int n=nums.size();
        int start=0,end=n-1,mini=INT_MAX;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(nums[start]<=nums[mid])
            {
                mini=min(mini,nums[start]);
                start=mid+1;
            }
            else
            {
                mini=min(mini,nums[mid]);
                end=mid-1;
            }
        }
        return mini;
        
    }
};