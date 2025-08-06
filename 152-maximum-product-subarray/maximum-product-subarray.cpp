class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n=nums.size();
        int ans1=1,ans2=1,maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            ans1*=nums[i];
            maxi=max(maxi,ans1);
            if(ans1==0)
            ans1=1;
        }
        for(int i=n-1;i>=0;i--)
        {
            ans2*=nums[i];
            maxi=max(maxi,ans2);
            if(ans2==0)
            ans2=1;
        }
        return maxi;
        
    }
};