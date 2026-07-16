//3sum-leetcode
class Solution 
{
    public List<List<Integer>> threeSum(int[] nums) 
    {
        Arrays.sort(nums);
        int i,sum=0,target=0,l,r;
        List<List<Integer>> ans= new ArrayList<>();
        for(i=0;i<nums.length-2;i++)
        {
            if(i>0&&nums[i]==nums[i-1])
            {
                continue;
            }
            else
            {
                target=-nums[i];
                l=i+1;
                r=nums.length-1;
                while(l<r)
                {
                    sum=nums[l]+nums[r];
                    if(sum==target)
                    {
                        ans.add(Arrays.asList(nums[i],nums[l],nums[r]));
                        l++;
                        r--;
                        while(l<r&&nums[l]==nums[l-1])
                        {
                            l++;
                        }
                        while(l<r&&nums[r]==nums[r+1])
                        {
                            r--;
                        }
                    }
                    else if(sum>target)
                    {
                        r--;
                    }
                    else
                    {
                        l++;
                    }
                }
            }
        }
        return ans;
    }
}