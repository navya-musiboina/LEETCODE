class Solution {
public:
    int func(vector<int>&weights,int mid)
    {
        int sum=0,count=1;
        for(int i=0;i<weights.size();i++)
        {
           if(sum+weights[i]<=mid)
           sum+=weights[i];
           else
           {
           sum=weights[i];
           count++;
           }
        }
        return count;
    }
    int shipWithinDays(vector<int>& weights, int days) 
    {
        int n=weights.size();
        int start=*max_element(weights.begin(),weights.end());
        int end=accumulate(weights.begin(),weights.end(),0);
        int ans=-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            int ch=func(weights,mid);
            if(ch<=days)
            {
                end=mid-1;
                ans=mid;
            }
            else
            start=mid+1;
        }
        return ans;
        
    }
};