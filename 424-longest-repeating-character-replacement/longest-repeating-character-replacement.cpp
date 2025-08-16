class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        int n=s.size(),maxi=0,ans=0;
        map<char,int>mpp;
        int j=0;
        for(int i=0;i<n;i++)
        {
            mpp[s[i]]++;
            maxi=max(maxi,mpp[s[i]]);
            while(i-j+1-maxi>k)
            {
                mpp[s[j]]--;
                if(mpp[s[j]]==0)
                mpp.erase(s[j]);
                j++;

            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};