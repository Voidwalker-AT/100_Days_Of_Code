// Problem: Given an array of n integers, reverse the array in-place using
// two-pointer approach.

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the reversed array, space-separated

// Example:
// Input:
// 5
// 1 2 3 4 5

// Output:
// 5 4 3 2 1

// Explanation: Swap pairs from both ends: (1,5), (2,4), middle 3 stays

#include <iostream>
#include <vector>

using namespace std;

int main() 
{
  int n,i;
  cout<<"Enter size of array ";
  cin>>n;
  vector<long long> arr(n);
  cout<<"Enter the elements of the array ";
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"The entered array is: ";
  for(i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }

  int l=0,r=n-1;

  while (l<r) 
  {
    arr[l]=arr[l]+arr[r];
    arr[r]=arr[l]-arr[r];
    arr[l]=arr[l]-arr[r];
    r--;
    l++;
  }
  cout<<"\nThe reversed array is: ";
  for(i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}