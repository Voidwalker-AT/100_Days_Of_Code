// Problem: You are given a rectangular matrix of integers. Starting from the outer boundary, traverse the matrix in a clockwise manner and continue moving inward layer by layer until all elements are visited.

// Input:
// - First line: two integers r and c representing the number of rows and columns
// - Next r lines: c integers each representing the matrix elements

// Output:
// - Print all visited elements in the order of traversal, separated by spaces

// Example:
// Input:
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9

// Output:
// 1 2 3 6 9 8 7 4 5

// Explanation:
// The traversal begins along the top row, proceeds down the rightmost column, then moves across the bottom row in reverse, and finally goes up the leftmost column. The same pattern repeats for the inner submatrix.

// Test Cases:

// Test Case 1:
// Input:
// 2 3
// 1 2 3
// 4 5 6
// Output:
// 1 2 3 6 5 4

// Test Case 2:
// Input:
// 3 1
// 7
// 8
// 9
// Output:
// 7 8 9
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x,y,i,j;
    cout<<"Enter Rows and Columns respectively: ";
    cin>>x>>y;
    int top=0,bottom=x-1,l=0,r=y-1;
        cout<<"Enter the array";
    vector<vector<int>> a(x,vector<int>(y));
    for(i=0;i<x;i++)
    {
        cout<<"Enter the "<<i+1<<" row\n";
        for(j=0;j<y;j++)
        {
            cin>>a[i][j];
        }
    }
    while(top<=bottom && l<=r)
    {
        for(i=l;i<=r;i++)
        {
            cout<<a[top][i]<<" ";
        }
        top++;
        for(i=top;i<=bottom;i++)
        {
            cout<<a[i][r]<<" ";
        }
        r--;
        if (top<=bottom) 
        {
        for(i=r;i>=l;i--)
        {
            cout<<a[bottom][i]<<" ";
        }
        bottom--;
        }
        if(l<=r)
        {
            for(i=bottom;i>=top;i--)
            {
                cout<<a[i][l]<<" ";
            }
            l++;
        }
    }
    return 0;
}
