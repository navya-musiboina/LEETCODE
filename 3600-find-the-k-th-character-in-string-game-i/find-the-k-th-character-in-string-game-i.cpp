class Solution {
public:
    char kthCharacter(int k) 
    {
        string s="a";
        while (s.size()<k)
        {
            int n=s.size();
            for (int i=0;i<n;i++)
            {
                 int number=s[i]-'a'+1;
                char nextchar = (number) % 26 + 'a';
                s+=nextchar;
            }
        }
        return s[k-1];
    }
};
