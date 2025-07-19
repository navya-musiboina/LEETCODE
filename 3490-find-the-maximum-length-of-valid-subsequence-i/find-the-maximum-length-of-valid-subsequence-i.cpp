class Solution {
public:
    int maximumLength(vector<int>& nums) {
       int n=nums.size(),even=0,odd=0,eo=1 ,prev=nums[0];
       for(int i=0;i<n;i++)
       {
        if(nums[i]%2==0)
        even++;
        else
        odd++;

        if(i && nums[i]%2==0 && prev%2==1)
        {
            eo++;
            prev=nums[i];
        }
        if(i && nums[i]%2==1 && prev%2==0)
        {
            eo++;
            prev=nums[i];
        }
       }
       int ans=max({even,odd,eo});
       return ans;
    }
};