//Spiral Matrix-leetcode
class Solution 
{
    public List<Integer> spiralOrder(int[][] matrix) 
    {
        int x=matrix.length,y=matrix[0].length,i;
        int top=0,bottom=x-1,l=0,r=y-1;
        List<Integer> ans=new ArrayList<>();
        while(top<=bottom && l<=r)
        {
            for(i=l;i<=r;i++)
            {
                ans.add(matrix[top][i]);
            }
            top++;
            for(i=top;i<=bottom;i++)
            {
                ans.add(matrix[i][r]);
            }
            r--;
            if (top<=bottom) 
            {
            for(i=r;i>=l;i--)
            {
                ans.add(matrix[bottom][i]);
            }
            bottom--;
            }
            if(l<=r)
            {
                for(i=bottom;i>=top;i--)
                {
                    ans.add(matrix[i][l]);
                }   
                l++;
            }
        }
        return ans;
    }
}