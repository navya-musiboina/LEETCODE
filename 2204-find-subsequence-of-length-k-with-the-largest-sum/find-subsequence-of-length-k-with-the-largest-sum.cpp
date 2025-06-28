class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) 
    {
        int n=nums.size();
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++)
        v.push_back({nums[i],i});
        sort(v.rbegin(),v.rend());
        vector<bool>ch(n,false);
        for(int i=0;i<k;i++)
            ch[v[i].second]=true;
            vector<int>ans;

        for(int i=0;i<n;i++)
            if(ch[i])
            ans.push_back(nums[i]);
        return ans;


    }
};