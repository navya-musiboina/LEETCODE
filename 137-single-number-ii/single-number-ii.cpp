class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int n=nums.size();
        int ans=0,count=0;
        for(int i=31;i>=0;i--)
        {
            count=0;
            for(int j=0;j<n;j++)
            {
                if(nums[j]&(1<<i))
                count++;
            }
              ans=ans<<1;
            if(count%3==1)
            {
              
                ans|=1;
            }
        }
        return ans;
       
    }
};
