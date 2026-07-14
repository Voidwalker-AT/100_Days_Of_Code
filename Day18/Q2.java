//Product of Array Except Self-leetcode
class Solution 
{
    public int[] productExceptSelf(int[] nums) 
    {
        int i;
        int[] left=new int[nums.length];
        int[] right=new int[nums.length];
        int[] ans=new int[nums.length];
        for(i=0;i<nums.length;i++)
        {
            if(i==0)
            {
                left[i]=1;
            }
            else
            {
                left[i]=left[i-1]*nums[i-1];
                
            }
        }
        for(i=nums.length-1;i>=0;i--)
        {
            if(i==nums.length-1)
            {
                right[i]=1;
            }
            else
            {
                right[i]=right[i+1]*nums[i+1];
            }
        }
        for(i=0;i<nums.length;i++)
        {
            ans[i]=left[i]*right[i];
        }
        return ans;
    }
}

//more optimal solution(O(n),O(1))
class Solution 
{
    public int[] productExceptSelf(int[] nums) 
    {
        int i;
        int[] ans=new int[nums.length];
        int right=1;
        for(i=0;i<nums.length;i++)
        {
            if(i==0)
            {
                ans[i]=1;
            }
            else
            {
                ans[i]=ans[i-1]*nums[i-1];
                
            }
        }
        for(i=nums.length-1;i>=0;i--)
        {
            ans[i]*=right;
            right*=nums[i];
        }
        return ans;
    }
}