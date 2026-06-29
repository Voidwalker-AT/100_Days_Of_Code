//Missing in Array-GFG
class Solution 
{
    int missingNum(int arr[]) 
    {
        int n=arr.length+1,i;
        double total=(double)n*(n+1)/2,sum=0;
        for(i=0;i<n-1;i++)
        {
            sum+=arr[i];
        }
        return (int)(total-sum);
    }
}
