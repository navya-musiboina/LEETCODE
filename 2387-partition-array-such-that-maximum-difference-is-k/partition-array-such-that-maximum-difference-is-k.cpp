class Solution {
public:
  //1 2 3 10 100 k=4
  // dry run:10-3>4 so k=10 and count=1 for (1,2,3)
  //  100-10>k so count=2( for 10)  and k=100 
  // no itertation
   
    int partitionArray(vector<int>& nums, int k) 
    {
        int n=nums.size();
      sort(nums.begin(),nums.end());
      int start=0,count=0;
      for(int i=1;i<n;i++)
      {
        if(nums[i]-nums[start]>k){
        count++;
        start=i;
      }
      }
      return count+1;
    }
};
