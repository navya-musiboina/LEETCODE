class Solution {
public:
    int subarraySum(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>pref(n);
        pref[0]=nums[0];
        for(int i=1;i<n;i++)
        pref[i]=pref[i-1]+nums[i];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int index=max(0,i-nums[i]);
            sum+=(pref[i]-pref[index]+nums[index]);
        }
        return sum;
        
    }
};