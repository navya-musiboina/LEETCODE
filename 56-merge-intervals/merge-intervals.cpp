class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        int start=intervals[0][0];
        int end=intervals[0][1];
        for(int i=1;i<n;i++)
        {
            if(end>=intervals[i][0])
            {
                end=max(end,intervals[i][1]);
            }
            else
            {
                ans.push_back({start,end});
                end=intervals[i][1];
                start=intervals[i][0];
            }
        }
        ans.push_back({start,end});
        return ans;
    }
};