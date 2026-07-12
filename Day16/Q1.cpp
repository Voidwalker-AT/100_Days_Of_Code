// Problem: Given an array of integers, count the frequency of each distinct element and print the result.

// Input:
// - First line: integer n (size of array)
// - Second line: n integers

// Output:
// - Print each element followed by its frequency in the format element:count

// Example:
// Input:
// 5
// 1 2 2 3 1

// Output:
// 1:2 2:2 3:1
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i,n,j;
    cout<<"enter number of elements: ";
    cin>>n;
    vector<int> a(n);
    vector<int> vis(n,0);
    cout<<"enter the elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        int cnt=0;
        if(!vis[i])
        {
            for(j=0;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    vis[j]=1;
                    cnt++;
                }
            }
            cout<<a[i]<<":"<<cnt<<" ";
        }
    }
    return 0;
}