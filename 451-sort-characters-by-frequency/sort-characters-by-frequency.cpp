class Solution {
public:
    string frequencySort(string s) 
    {
        int n=s.size();
        map<char,int>mpp;
        for(int i=0;i<n;i++)
        mpp[s[i]]++;
        vector<pair<int,char>>pq;
        for(auto it:mpp)
        pq.push_back({it.second,it.first});
        sort(pq.rbegin(),pq.rend());
        string res;
        for(auto it:pq)
        {
            int fr=it.first;
            char ch=it.second;
               res += string(fr, ch);  
        }
        return res;
    }
};