// Problem: Write a program to check whether a given square matrix is an Identity Matrix. An identity matrix is a square matrix in which all diagonal elements are 1 and all non-diagonal elements are 0.

// Input:
// - First line: integer n representing number of rows and columns
// - Next n lines: n integers each representing the matrix elements

// Output:
// - Print "Identity Matrix" if the matrix satisfies the condition
// - Otherwise, print "Not an Identity Matrix"

// Example:
// Input:
// 3
// 1 0 0
// 0 1 0
// 0 0 1

// Output:
// Identity Matrix
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x,i,j,b=0;
    cout<<"Enter the dimension of the square matrix: ";
    cin>>x;
    vector <vector<int>> a(x,vector<int>(x));
    for(i=0;i<x;i++)
    {
        cout<<"Enter the "<<i+1<<" row\n";
        for(j=0;j<x;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<x;j++)
        {
            if(i==j)
            {
                if(a[i][j]!=1)
                {
                    b=1;
                    break;
                }
            }
            else 
            {
                if(a[i][j]!=0)
                {
                    b=1;
                    break;
                }
            }
        }
        if(b==1)
        {
            break;
        }
    }
    if(b==1)
    {
        cout<<"It is not a identity matrix";
    }
    else {
    cout<<"It is a Identity matrix";
    }
    return 0;
}

