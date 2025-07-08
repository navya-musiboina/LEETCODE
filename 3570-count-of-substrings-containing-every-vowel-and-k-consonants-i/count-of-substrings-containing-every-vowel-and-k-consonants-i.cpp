class Solution {
public:
    int atleast(string word, int k)
    {
          int n=word.size();
        set<char>se={'a','e','i','o','u'};
        map<char,int>mpp;
        int cons=0;
        int ans=0,j=0;
        for(int i=0;i<n;i++)
        {
            if(se.find(word[i])!=se.end())
            mpp[word[i]]++;
            else
            cons++;


            while(mpp.size()==5 && cons>=k)
            {
                ans+=(n-i);
                if(se.find(word[j])!=se.end())
                {
                    mpp[word[j]]--;
                    if(mpp[word[j]]==0)
                    mpp.erase(word[j]);
                }
                else
                cons--;

                j++;
            }
        }
        return ans;

    }
    int countOfSubstrings(string word, int k) 
    {
       return atleast(word,k)-atleast(word,k+1);
    }
};
