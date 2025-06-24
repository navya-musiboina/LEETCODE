class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int k=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int l=upper_bound(nums.begin(),nums.end(),target)-nums.begin();

        if(k>=n  || nums[k]!=target)
        return {-1,-1};

        return {k,l-1};
    }
};