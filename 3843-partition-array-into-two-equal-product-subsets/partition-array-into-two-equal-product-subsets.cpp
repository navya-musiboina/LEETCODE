class Solution {
public:
      typedef __int128 ll;
    bool func(vector<int>&nums,int i,long long target,ll ans)
    {
        if(ans==target) return 1;
        if(i>=nums.size()) return false;
        int take=0,ntake=0;
        if((ll)ans*nums[i]<=target)
       take= func(nums,i+1,target,(ll)ans*nums[i]);
        ntake=func(nums,i+1,target,ans);

        return take|ntake;

    }
    bool checkEqualPartitions(vector<int>& nums, long long target) 
    {
        int n=nums.size();
        ll  pro=1;
        for(int i=0;i<n;i++)
        {
            pro=(ll)pro*nums[i];
            if(pro>(ll)target*target)
            return false;
        }
        if(pro!=(ll)target*target) return false;

        return func(nums,0,target,1);
    }
};