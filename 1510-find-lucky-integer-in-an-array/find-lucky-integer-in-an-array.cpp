class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
        map<int,int>mpp;
        for(auto it:arr)
        mpp[it]++;
        int count=-1;
        for(auto it:mpp)
        {
            if(it.first==it.second)
           count=it.first;
        }
        return count;
    }
      
};