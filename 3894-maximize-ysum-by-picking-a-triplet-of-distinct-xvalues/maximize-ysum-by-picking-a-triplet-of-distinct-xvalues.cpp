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
        sort(ans.rbegin(),ans.rend());
        int k=1,sum=0;
        for(int i=0;i<ans.size() && k<=3;i++)
        {
        sum+=ans[i];
        k++;
        if(k==4) return sum;
    }
        return -1;
    }
};