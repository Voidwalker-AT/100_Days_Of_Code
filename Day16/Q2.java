//Rotate array-leetcode
class Solution 
{
    public void rotate(int[] nums,int k) 
    {
        int temp;
        k=k%nums.length;
        int left=0,right=nums.length-1;
        while(left<right)
        {
            temp=nums[left];
            nums[left]=nums[right];
            nums[right]=temp;
            right--;
            left++;
        }
        left=0;
        right=k-1;
        while(left<right)
        {
            temp=nums[left];
            nums[left]=nums[right];
            nums[right]=temp;
            right--;
            left++;
        }
        left=k;
        right=nums.length-1;
        while(left<right)
        {
            temp=nums[left];
            nums[left]=nums[right];
            nums[right]=temp;
            right--;
            left++;
        }
        return;
    }
}