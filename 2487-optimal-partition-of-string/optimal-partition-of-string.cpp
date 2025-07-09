class Solution {
public:
    int partitionString(string s) 
    {
        int n=s.size();
        map<char,int>mpp;
        int count=1;
        for(int i=0;i<n;i++)
        {
            mpp[s[i]]++;
            if(mpp[s[i]]>1)
            {
                count++;
                mpp.clear();
                mpp[s[i]]++;
            }
        }
        return count;   

    }
};