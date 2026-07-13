// Problem: Write a program to find the maximum and minimum values present in a given array of integers.

// Input:
// - First line: integer n
// - Second line: n integers

// Output:
// - Print the maximum and minimum elements

// Example:
// Input:
// 6
// 3 5 1 9 2 8

// Output:
// Max: 9
// Min: 1

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,i,max,min;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    vector<int> a(n);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
    }
    cout<<"Max: "<<max<<" Min: "<<min;
    return 0;
}