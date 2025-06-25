class Solution {
    public int[] twoSum(int[] nums, int target) 
    {
        HashMap<Integer,Integer>mpp=new HashMap<>();
        for(int i=0;i<nums.length;i++)
        {
            int dif=target-nums[i];
            if(mpp.containsKey(dif))
            return new int[]{i,mpp.get(dif)};
            
            mpp.put(nums[i],i);

        }
        return new int[]{};
        
    }
}