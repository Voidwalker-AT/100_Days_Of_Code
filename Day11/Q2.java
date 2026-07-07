//Transpose matrix-leet code
class Solution 
{
    public int[][] transpose(int[][] matrix)
    {
        int x=matrix.length,y=matrix[0].length,i,j;
        int[][] a=new int[y][x];
        for(i=0;i<x;i++)
            {
                for(j=0;j<y;j++)
                {
                    a[i][j]=matrix[j][i];
                }
            }
            return a;   
    }
}