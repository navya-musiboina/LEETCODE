class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(i<2||nums[j-2]!=nums[i])
            {
                nums[j]=nums[i];
                j++;
            }
        }
        return j;

        
    }
};