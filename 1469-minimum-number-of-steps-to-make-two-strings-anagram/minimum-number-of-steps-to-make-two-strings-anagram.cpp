class Solution {
public:
    int minSteps(string s, string t) 
    {
        int n=s.size();
        int m=t.size();
        map<char,int>mpp1,mpp2;
        for(char it:s) mpp1[it]++;
        for(char it:t)mpp2[it]++;
        int dif=0;
        for(auto it:mpp2)
        {
            if(it.second>mpp1[it.first])
            dif+=it.second-mpp1[it.first];
        }
        return dif;
    }
};