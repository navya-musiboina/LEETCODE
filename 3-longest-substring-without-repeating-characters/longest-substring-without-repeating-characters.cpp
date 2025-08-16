class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
       int n=s.size();
       map<char,int>mpp;
       int j=0,maxi=0;
       for(int i=0;i<n;i++)
       {
        
        while(mpp.find(s[i])!=mpp.end())
        {
            mpp[s[j]]--;
            if(mpp[s[j]]==0)
            mpp.erase(s[j]);
            j++;
        }
        mpp[s[i]]++;
        maxi=max(maxi,i-j+1);
       }
       return maxi;
        
    }
};