class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
        int n=nums.size();
        int sum=0,maxi=0;
        map<int,int>mpp;
        mpp[0]=-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            sum++;
            else
            sum--;
            if(mpp.find(sum)!=mpp.end())
            maxi=max(maxi,i-mpp[sum]);
            else
            mpp[sum]=i;
        }
        return maxi;
     
    }
};