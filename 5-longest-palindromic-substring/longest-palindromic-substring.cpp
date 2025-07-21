class Solution {
public:
    
    string check(string s,int i,int j)
    {
      while(i>=0 && j<s.size() && s[i]==s[j])
      {
        i--;
        j++;
      }
      return s.substr(i+1,(j-i-1));
    }
    string longestPalindrome(string s) 
    {
          string res="";
        for(int i=0;i<s.size();i++)
        {
           string a= check(s,i,i);
           string b= check(s,i,i+1);
         if(a.size()>res.size())
         res=a;
         if(b.size()>res.size())
         res=b;
        }
        return res;
        
    }
};