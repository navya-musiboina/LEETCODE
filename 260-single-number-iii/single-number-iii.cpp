class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
       int n=nums.size();
       int xor1=0,xor2=0;
       for(int i=0;i<n;i++)
       xor1^=nums[i];

      int index=0;
       while((xor1&1)==0)
       {
        xor1>>=1;
        index++;
       }
       xor1=0;
       for(int i=0;i<n;i++)
       {
        if(nums[i]&(1<<index))
        xor1^=nums[i];
        else
        xor2^=nums[i];
       }
       return {xor1,xor2};

    }
};