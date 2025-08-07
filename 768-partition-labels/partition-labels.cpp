class Solution {
public:
    vector<int> partitionLabels(string s) 
    {
        int n=s.size();
       map<char,int>mpp;
       for(int i=0;i<n;i++)
       mpp[s[i]]=i;
       vector<int>ans;
       int end=0,start=0;
       for(int i=0;i<n;i++)
       {
        if(end<i)
        {
        ans.push_back(end-start+1);
        end=mpp[s[i]];
        start=i;
         }
       else
        end=max(end,mpp[s[i]]);
       }
       ans.push_back(end-start+1);
       return ans;

    }
};