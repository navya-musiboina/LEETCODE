class Solution {
public:
    bool static compare(string a,string b)
    {
        return a.size()<b.size();
    }
    bool check(string a,string b)
    {
        if(a.size()!=b.size()+1) return false;
        int i=0,j=0;
        while(i<a.size() && j<b.size())
        {
            if(a[i]==b[j])
            {
                i++;
                j++;
            }
            else
            i++;
        }
        if(j==b.size()) return true;
        return false;

    }
    int longestStrChain(vector<string>& words) 
    {
        sort(words.begin(),words.end(),compare);
        int n=words.size();
        int maxi=0;
        vector<int>dp(n,1);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(check(words[i],words[j]) && dp[i]<1+dp[j])
                dp[i]=1+dp[j];
            }
            maxi=max(maxi,dp[i]);
        }
        return maxi;
    }
};