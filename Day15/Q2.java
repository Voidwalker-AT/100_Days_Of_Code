//Set Matrix zeroes-leetcode
class Solution 
{
    public void setZeroes(int[][] matrix) 
    {
        int i,j,x=matrix.length,y=matrix[0].length;
        boolean[] row=new boolean[x];
        boolean[] col=new boolean[y];
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
        for(i=0;i<x;i++)
        {
            if(row[i])
            {
                for(j=0;j<y;j++)
                {
                    matrix[i][j]=0;
                }
            }
        }
        for(i=0;i<y;i++)
        {
            if(col[i])
            {
                for(j=0;j<x;j++)
                {
                    matrix[j][i]=0;
                }
            }
        }
        return;
    }
}