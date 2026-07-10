//Rotate image(matrix)-leetcode
class Solution 
{
    public void rotate(int[][] matrix) 
    {
        int x=matrix.length,i,j,temp;
        for(i=0;i<x;i++)
        {
            for(j=i+1;j<x;j++)
            {
                temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        for(i=0;i<x;i++)
        {
            int r=x-1,l=0;
            while(l<r)
            {
                temp=matrix[i][l];
                matrix[i][l]=matrix[i][r];
                matrix[i][r]=temp;
                l++;
                r--;
            }
        }
        return;
    }
}