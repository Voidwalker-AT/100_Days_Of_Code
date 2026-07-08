//toeplitz matrix-leetcode
class Solution 
{
    public boolean isToeplitzMatrix(int[][] matrix) 
    {
        int x=matrix.length,y=matrix[0].length,i,j;

        for(i=1;i<x;i++)
        {
            for(j=1;j<y;j++)
            {
                if(matrix[i][j]!=matrix[i-1][j-1])
                {
                    return false;
                }
            }
        }
        return true;
    }
}