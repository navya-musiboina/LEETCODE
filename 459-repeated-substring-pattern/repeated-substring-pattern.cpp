class Solution {
public:
    bool repeatedSubstringPattern(string s) 
    {
        int n=s.size();
        int found=1;
        for(int len=1;len<=(n/2);len++)
        {
            found=1;
          //  if(n%len==0)
            //{
            string pattern=s.substr(0,len);
            for(int j=len;j<n;j+=len)
            {
               if(s.substr(j,len)!=pattern)
            {
               found=0;
               break;
            }
            }
            if(found)
            return true;
           // }
        }
        return false;
        
    }
};