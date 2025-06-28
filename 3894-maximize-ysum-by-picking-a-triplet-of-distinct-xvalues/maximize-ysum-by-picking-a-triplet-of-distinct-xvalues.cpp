class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) 
    {
        int n=x.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            if(mpp.find(x[i])!=mpp.end())
            mpp[x[i]]=max(mpp[x[i]],y[i]);
            else
            mpp[x[i]]=y[i];
        }
        vector<int>ans;
        for(auto it:mpp)
        ans.push_back(it.second);
           if(ans.size()<3) return -1;
        sort(ans.rbegin(),ans.rend());
        return ans[0]+ans[1]+ans[2];
    }
};