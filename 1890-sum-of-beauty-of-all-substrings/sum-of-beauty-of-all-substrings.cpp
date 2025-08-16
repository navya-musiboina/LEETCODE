class Solution {
public:
    int beautySum(string s) 
    {
        int n=s.size(),sum=0;
        for(int i=0;i<n;i++)
        {
            vector<int>fre(26,0);
            for(int j=i;j<n;j++)
            {
                fre[s[j]-'a']++;
                int maxi=*max_element(fre.begin(),fre.end());
                int mini=INT_MAX;
                for(auto it:fre)
                {
                    if(it>0)
                    mini=min(mini,it);
                }
                sum+=maxi-mini;
            }
        }
        return sum;
    }
};