class Solution {
public:
    int  func(vector<int>& bloomDay,int k,int mid)
    {
        int count=0,ans=0;
        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=mid)
            {
            count++;
            if(count==k)
            {
            ans++;
            count=0;
            }
            }
            else
            count=0;

        }
        return ans;
    }
    int minDays(vector<int>& bloomDay, int m, int k) 
    {
        int start=*min_element(bloomDay.begin(),bloomDay.end());
        int end=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(start<=end)
        {
            int mid=(start+end)/2;;
            int ch=func(bloomDay,k,mid);
            if(ch>=m)
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