class Solution {
public:
    int possibleStringCount(string word) 
    {
        int ans=1;
        int n=word.size();
        for(int i=1;i<n;i++)
        {
            if(word[i]==word[i-1])
            ans++;
        }
        return ans;
    }
};