// Problem: Given a matrix, calculate the sum of its primary diagonal elements. The primary diagonal consists of elements where row index equals column index.

// Input:
// - First line: two integers m and n
// - Next m lines: n integers each

// Output:
// - Print the sum of the primary diagonal elements

// Example:
// Input:
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9

// Output:
// 15

// Explanation:
// 1 + 5 + 9 = 15
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int i,j,x,y;
    cout<<"Enter the dimensions rows and columns respectively: ";
    cin>>x>>y;
    vector<vector<int>> a(x,vector<int>(y));
    for(i=0;i<x;i++)
    {
        cout<<"Enter the "<<i+1<<" row\n";
        for(j=0;j<y;j++)
        {
            cin>>a[i][j];
        }
    }
    int sum=0;
    for(i=0;i<x && i<y;i++)
    {
        sum += a[i][i];
    }
    cout<<"The sum of diagonals is: "<<sum;
}