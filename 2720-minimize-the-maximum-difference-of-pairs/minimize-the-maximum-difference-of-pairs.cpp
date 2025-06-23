class Solution {
public:
   
   int func(vector<int>&nums,int mid)
   {
    int i=0,n=nums.size(),count=0;
    while(i+1<n)
    {
        if(nums[i+1]-nums[i]<=mid)
        {
            count++;
            i+=2;
        }
        else
        i++;
    }
    return count;
   }
    int minimizeMax(vector<int>& nums, int p)
    {
        int n=nums.size();
      sort(nums.begin(),nums.end());
      int start=0;
      int end=nums[n-1]-nums[0];
      int ans=-1;
      while(start<=end)
      {
        int mid=(start+end)/2;
        int k=func(nums,mid);
        if(k>=p)
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
      }
      return ans;
    }
};