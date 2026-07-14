// Problem: Given an array of integers, rotate the array to the right by k positions.

// Input:
// - First line: integer n
// - Second line: n integers
// - Third line: integer k

// Output:
// - Print the rotated array

// Example:
// Input:
// 5
// 1 2 3 4 5
// 2

// Output:
// 4 5 1 2 3
#include<iostream>
#include<vector>

using namespace  std;

void reverse(vector<int>& a,int l,int r)
{
    int temp;
    while(l<r)
    {
        temp=a[l];
        a[l]=a[r];
        a[r]=temp;
        l++;
        r--;
    }
}

int main()
{
    int n,k,i;
    cout<<"Enter the size: ";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    } 
    cout<<"Enter k: ";
    cin>>k;
    k=k%n;
    reverse(a,0,n-1);
    reverse(a,0,k-1);
    reverse(a,k,n-1);
    cout<<"The elements are: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}