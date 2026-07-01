// Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

// Input:
// - First line: integer p (number of entries in server log 1)
// - Second line: p sorted integers representing arrival times from server 1
// - Third line: integer q (number of entries in server log 2)
// - Fourth line: q sorted integers representing arrival times from server 2)

// Output:
// - Print a single line containing all arrival times in chronological order, separated by spaces

// Example:
// Input:
// 5
// 10 20 30 50 70
// 4
// 15 25 40 60

// Output:
// 10 15 20 25 30 40 50 60 70

// Explanation: Compare the next unprocessed arrival time from both logs and append the earlier one to the final log until all entries are processed

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n1,n2,i=0,j=0;
    cout<<"Enter The size of the first array: ";
    cin>>n1;
    vector<int> arr1(n1);
    cout<<"Enter the elements of the first array: ";
    for(i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the size of the second array: ";
    cin>>n2;
    vector<int> arr2(n2);
    cout<<"enter the elements of the second array: ";
    for(i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    vector<int> ans;
    i=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
        }
        else 
        {
            ans.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n1)
    {
        ans.push_back(arr1[i]);
        i++;
    }
    while(j<n2)
    {
        ans.push_back(arr2[j]);
        j++;
    }
    cout<<"The Final Merged array is: ";
    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}