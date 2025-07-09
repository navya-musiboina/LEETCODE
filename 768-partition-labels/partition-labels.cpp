class Solution {
public:
    vector<int> partitionLabels(string s) 
    {
        int n=s.size();
        map<char,int>mpp;
        for(int i=0;i<n;i++)
        mpp[s[i]]=i;
        int start=0;
        int end=mpp[s[0]];
     vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(end<i)
            {
                ans.push_back(end-start+1);
                start=i;
                end=mpp[s[i]];
            }
            else
            {
                end=max(end,mpp[s[i]]);
            }
        }
        ans.push_back(end-start+1);
        return ans;
        
    }
};