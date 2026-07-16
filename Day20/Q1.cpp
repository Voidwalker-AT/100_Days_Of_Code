// Problem: Given an array of integers, count the number of subarrays whose sum is equal to zero.

// Input:
// - First line: integer n
// - Second line: n integers

// Output:
// - Print the count of subarrays having sum zero

// Example:
// Input:
// 6
// 1 -1 2 -2 3 -3

// Output:
// 6

// Explanation: A subarray is a continuous part of the array. For the input array 1 -1 2 -2 3 -3, the following subarrays have sum zero: [1, -1], [2, -2], [3, -3], [1, -1, 2, -2], [2, -2, 3, -3], and [1, -1, 2, -2, 3, -3]. Since there are 6 such subarrays, the output is 6.

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main()
{
    int i,n,cnt=0,sum=0;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter array: ";
    vector<int> a(n);
    unordered_map<int,int>mp;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mp[0]=1;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        cnt+=mp[sum];
        mp[sum]++;
    }
        cout<<"No. of time: "<<cnt;
    return 0;
}