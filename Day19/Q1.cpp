// Problem: Given an array of integers, find two elements whose sum is closest to zero.

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the pair of elements whose sum is closest to zero

// Example:
// Input:
// 5
// 1 60 -10 70 -80

// Output:
// -10 1

// Explanation: Among all possible pairs, the sum of -10 and 1 is -9, which is the closest to zero compared to other pairs.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int i,j,n,sum,best,p1,p2;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter the array: ";
    vector<int> a(n);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    best=a[0]+a[1];
    p1=a[0];
    p2=a[1];
    std::sort(a.begin(),a.end());
    int l=0,r=n-1;
    while(l<r)
    {
        sum=a[l]+a[r];
        if(abs(sum)<best)
        {
            best=abs(sum);
            p1=a[l];
            p2=a[r];
        }
        if(sum<0)
        {
            l++;
        }
        else {
        r--;
        }
    }
    cout<<"The pair is: "<<p1<<"And "<<p2;
    return 0;
}
