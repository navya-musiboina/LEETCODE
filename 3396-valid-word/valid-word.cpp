class Solution {
public:
    bool isValid(string word) 
    {

        set<char>se={'a','e','i','o','u'};
        int v=0,c=0;

        for(int i=0;i<word.size();i++)
        {
            char ch=word[i];
            if(!isalnum(ch)) return false;
            ch=tolower(ch);
            if(isalpha(ch))
            {
                if(se.find(ch)!=se.end())
                v=1;
                else
                c=1;
            }
        }
        if(word.size()>=3 && v && c) return true;
        return false;
        
    }
};