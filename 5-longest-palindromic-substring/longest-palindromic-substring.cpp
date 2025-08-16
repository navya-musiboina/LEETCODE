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
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            string odd=check(s,i,i);
            string even=check(s,i,i+1);
            if(res.size()<odd.size())
            res=odd;
            if(res.size()<even.size())
            res=even;
        }
        return res;
    }
};