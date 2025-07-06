class FindSumPairs {
public:
   vector<int>a,b;
  map<int,int>mpp;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) 
    {
        a=nums1;
        b=nums2;
        for(auto it: b)
        mpp[it]++;
    }
    void add(int index, int val) 
    {
        mpp[b[index]]--;
        b[index]+=val;
        mpp[b[index]]++;
    }
    
    int count(int tot) 
    {
        int count=0;
        for(auto it:a)
        {
            int sum=tot-it;
            count+=mpp[sum];
        }
        return count;
        
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */