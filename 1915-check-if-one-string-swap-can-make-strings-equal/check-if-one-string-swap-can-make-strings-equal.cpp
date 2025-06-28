class Solution {
public:
    bool areAlmostEqual(string s1, string s2) 
    {
        int ans=-1;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i])
            {
                if(ans==-1) ans=i;
                else{
                swap(s1[ans],s1[i]);
                return s1==s2;
                }
            }
        }
        return s1==s2;
       
    }
};