
class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums, int x) 
    {
        int n=nums.size();
        map<int,int>mpp;
       set<int>s;
       for(int i=x;i<n;i++)
       {
       s.insert(nums[i]);
       mpp[nums[i]]++;
       }
     
      int mini=INT_MAX;
       for(int i=0;i<n;i++)
       {
        if(s.empty())  break;

        auto it=s.lower_bound(nums[i]);
        if(it!=s.end())
        mini=min(mini,abs(nums[i]-*it));

        if(it!=s.begin())
        {
            it--;
            mini=min(mini,abs(nums[i]-*it));
        }
        int out=i+x;
        if(i+x<n)
        {
            if(mpp[nums[out]]>1)
            mpp[nums[out]]--;
            else
            s.erase(nums[out]);
        } 
       }   
       return mini;
    }
};
