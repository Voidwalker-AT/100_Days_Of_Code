//Maximum current circular subarray-leetcode
class Solution
{
    public int maxSubarraySumCircular(int[] nums)
    {
        int i,total=0,currentMax=nums[0],normalMax=nums[0],currentMin=nums[0],minSubarray=nums[0];
        for(i=0;i<nums.length;i++)
        {
            total+=nums[i];
            if(i>0)
            {
                currentMax=Math.max(nums[i],currentMax+nums[i]);
                normalMax=Math.max(normalMax,currentMax);
                currentMin=Math.min(nums[i],currentMin+nums[i]);
                minSubarray=Math.min(minSubarray,currentMin);
            }
        }
        if(normalMax<0)
        {
            return normalMax;
        }
        int wrapped=total-minSubarray;
        return Math.max(normalMax,wrapped);
    }
}