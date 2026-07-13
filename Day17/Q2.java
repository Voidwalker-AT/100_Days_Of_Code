//maximum subarray-leetcode
class Solution 
{
    public int maxSubArray(int[] nums) 
    {
        int i,current=nums[0],best=nums[0];
        for(i=1;i<nums.length;i++)
        {
            current=Math.max(nums[i],current+nums[i]);
            best=Math.max(current, best);
        }
        return best;
    }
}
