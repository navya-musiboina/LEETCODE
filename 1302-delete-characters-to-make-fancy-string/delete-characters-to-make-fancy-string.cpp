class Solution {
public:
    string makeFancyString(string s) 
    {
        int n=s.size();
        string ans;
        int j=-1;
        for(int i=0;i<n;i++)
        {
            if(j-1>=0  && s[i]==ans[j] && s[i]==ans[j-1] )
            continue;
            else
            {
            j++;
            ans+=s[i];
            }

        }
        return ans;
    }
};