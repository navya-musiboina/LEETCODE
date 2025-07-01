class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) 
    {
        int n=s.size();
        int sum=0,j=0,maxi=0;
        for(int i=0;i<n;i++)
        {
            sum+=abs(s[i]-t[i]);
            while(sum>maxCost)
            {
                sum-=abs(s[j]-t[j]);
                j++;
            }
            maxi=max(maxi,i-j+1);
        }
        return maxi;
    }
};