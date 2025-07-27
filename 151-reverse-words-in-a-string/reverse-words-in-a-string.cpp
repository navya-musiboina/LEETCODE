class Solution {
public:
    string reverseWords(string s) 
    {
        string ans;
        string sub="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            sub+=s[i];
            else
            {
                if(!sub.empty())
                {
                    if(ans.empty())
                    ans=sub;
                    else
                    ans=sub+" "+ans;
                    sub.clear();
                }
            }
        }
        if(!sub.empty())
        {
             if(ans.empty())
            ans=sub;
            else
                ans=sub+" "+ans;
        }

        return ans;
        
    }
};