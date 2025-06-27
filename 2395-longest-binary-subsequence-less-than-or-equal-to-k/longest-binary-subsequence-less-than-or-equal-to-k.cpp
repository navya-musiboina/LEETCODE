class Solution {
public:
    int longestSubsequence(string s, int k) 
    {
        long long n=s.size();
        long long   count=0;
        long long pow=0,ans=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='0')
            count++;
            else if(pow<32 && ans+(1LL<<pow)<=k){
                ans=ans+(1LL<<pow);
            count++;
            }
            pow++;
        }
        return count;

       
    }
};