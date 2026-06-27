//leet code two sum problem

class Solution
{
    public int[] twoSum(int[] nums, int a)
    {
        int i,j;
        for(i=0;i<=nums.length;i++)
        {
            for(j=i+1;j<nums.length;j++)
            {
                if(nums[i]+nums[j]==a)
                {
                    return new int[]{i,j};
                }
            }
        }
        return new int[] {};
    }
}