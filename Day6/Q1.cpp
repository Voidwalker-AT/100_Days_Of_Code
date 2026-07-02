// Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.

// Input:
// - First line: integer n
// - Second line: n space-separated integers (sorted array)

// Output:
// - Print unique elements only, space-separated

// Example:
// Input:
// 6
// 1 1 2 2 3 3

// Output:
// 1 2 3

// Explanation: Keep first occurrence of each element: 1, 2, 3

#include <iostream>
#include <vector>
 using namespace std;
 int main()
 {
    {
        int n,i,j;
        cout<<"Enter Size of th Sorted Array: ";
        cin>>n;
        vector<int> arr(n);
        cout<<"Enter the Elements in Ascending order: ";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        i=0;
        for(j=1;j<n;j++)
        {
            if(arr[i]!=arr[j])
            {
                i++;
                arr[i]=arr[j];
            }
        }
        cout<<"Number of unique elements: "<<i+1<<"\n they are: ";
        for(j=0;j<=i;j++)
        {
            cout<<arr[j]<<" ";
        }
        return 0;
    }
}