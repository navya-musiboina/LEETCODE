class Solution {
public: 
     static  bool compare(vector<int>&a,vector<int>&b)
     {
        return a[1]<b[1];
     }
      
    int eraseOverlapIntervals(vector<vector<int>>& intervals) 
    {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),compare);
         int end=intervals[0][1];
         int count=1;
        for(int i=1;i<n;i++)
        {
            if(intervals[i][0]>=end)
            {
                count++;
                end=intervals[i][1];
            }
        }
        return n-count;
    }
};