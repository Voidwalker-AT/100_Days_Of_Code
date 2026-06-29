// Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

// Input:
// - First line: integer n (array size)
// - Second line: n space-separated integers
// - Third line: integer k (key to search)

// Output:
// - Line 1: "Found at index i" OR "Not Found"
// Line 2: "Comparisons = c"

// Example:
// Input:
// 5
// 10 20 30 40 50
// 30

// Output:
// Found at index 2
// Comparisons = 3

// Explanation: Compared with 10, 20, 30 (found at index 2 with 3 comparisons)

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,i,k,c=0,b=0;
    cout<<"Enter teh size of array";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter The elements of the array";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Elemenet to be Searched";
    cin>>k;
    for(i=0;i<n;i++)
    {
        c++;
        if(arr[i]==k)
        {
            b=1;
            break;
        }
    }
    if(b==1)
    {
    cout<<"element found at index "<<i;
    }
    else
    {
        cout<<"element not found";
    }
    cout<<"\n number of comparisions made "<<c;
}