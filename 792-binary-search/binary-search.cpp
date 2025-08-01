class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int index=-1;
        int start=0,end=n-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target)
            end=mid-1;
            else
            start=mid+1;

        }
        return -1;
        
    }
};