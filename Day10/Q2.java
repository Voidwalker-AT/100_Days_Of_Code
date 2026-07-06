//Intersection of two arrays-leetcode

import java.util.ArrayList;

class Solution 
{   
    public int[] intersect(int[] nums1,int[] nums2) 
    {
        int[] freq= new int[1001];
        for(int i=0;i<nums1.length;i++)
            {
                freq[nums1[i]]++;
            }    
            ArrayList<Integer> ans= new ArrayList<>();
        for(int i=0;i<nums2.length;i++)
        {
            if (freq[nums2[i]]>0) 
            {
                ans.add(nums2[i]);
                freq[nums2[i]]--;   
            }
        }
        int[] res=new int[ans.size()];
        for(int i=0;i<ans.size();i++)
        {
            res[i]=ans.get(i);
        }
        return res;
    }
}