class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        map<int,int>mpp;
        for(int i=0;i<arr.size();i++)
        mpp[arr[i]]++;
        int count=0;
        int maxi=*max_element(arr.begin(),arr.end());
        for(int i=1;i<=maxi+k;i++)
        {
            if(mpp.find(i)==mpp.end())
            count++;
            if(count==k)
            return i;
        }
        return -1;
        
    }
};