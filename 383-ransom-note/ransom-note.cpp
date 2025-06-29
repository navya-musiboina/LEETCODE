class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        int n=ransomNote.size();
        map<char,int>mpp;
        for(int i=0;i<magazine.size();i++)
        mpp[magazine[i]]++;

        for(int i=0;i<n;i++)
        {
            if(mpp.find(ransomNote[i])==mpp.end()) return false;
            mpp[ransomNote[i]]--;
            if(mpp[ransomNote[i]]==0)
            mpp.erase(ransomNote[i]);
        }
        return true;
        
    }
};