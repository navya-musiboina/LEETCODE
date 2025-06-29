class Solution {
public:
  int mod=1e9+7;
    int numSubseq(vector<int>& nums, int target) 
    {
        long long n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>pow(n,1);
        pow[0]=1;
        for(int i=1;i<n;i++)
        pow[i]=(2LL*pow[i-1])%mod;
        int start=0,end=n-1,ans=0;
        while(start<=end)
        {
            if(nums[start]+nums[end]<=target)
            {
                ans=(ans+(pow[end-start]))%mod;
                start++;
            }
            else
            end--;
        }
        return ans;
    }
};
