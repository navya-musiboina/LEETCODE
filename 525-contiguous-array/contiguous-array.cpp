class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
        int n=nums.size();
        map<int,int>mpp;
        int ans=0,maxi=0;
        mpp[0]=-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            ans--;
            else
            ans++;
            if(mpp.find(ans)!=mpp.end())
            maxi=max(maxi,i-mpp[ans]);
            else
            mpp[ans]=i;
        }
        return maxi;
    }
};