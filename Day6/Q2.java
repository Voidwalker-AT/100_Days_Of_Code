//moving zeroes-leet code
class Solution 
{
    public void moveZeroes(int[] nums) 
    {
        int i,k=0;
        for (i=0;i<nums.length;i++)
        {
            if(nums[i]!=0)
            {
                nums[k]=nums[i];
                k++;
            }
        }
        while(k<nums.length)
        {
            nums[k]=0;
            k++;
        }
    }
}