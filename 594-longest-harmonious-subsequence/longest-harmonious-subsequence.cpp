class Solution {
public:
    int findLHS(vector<int>& nums) 
    {
        int n=nums.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        mpp[nums[i]]++;
       int maxi=0;
        for(auto it:mpp)
        {
            int next=it.first+1;
            if(mpp.find(next)!=mpp.end())
            {
            int sum=mpp[next]+it.second;
            maxi=max(maxi,sum);
            }
        }
        return maxi;

        
    }
};