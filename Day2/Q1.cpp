// Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.

// Input:
// - First line: integer n
// - Second line: n space-separated integers
// - Third line: integer pos (1-based position to delete)

// Output:
// - Print the updated array with (n-1) elements, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50
// 2

// Output:
// 10 30 40 50

// Explanation: Delete position 2 (element 20), remaining elements shift left

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,pos,i;
    cout<<"Enter Size of Array";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the Elements ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter The Position to be deleted ";
    cin>>pos;
    cout<<"Array Before deletion=";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nArray After Deletion";
    for(i=pos-1;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}