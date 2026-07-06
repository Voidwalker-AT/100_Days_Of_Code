// Problem: Read a string and check if it is a palindrome using two-pointer comparison.

// Input:
// - Single line: string s

// Output:
// - Print YES if palindrome, otherwise NO

// Example:
// Input:
// level

// Output:
// YES

// Explanation: String reads same forwards and backwards
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int l=0,r=s.length()-1;
    bool pal=true;
    while(l<r)
    {
        if(s[l]!=s[r])
        {
            pal=false;
            break;
        }
        r--;
        l++;
    }
    if(pal==true)
    {
        cout<<"String is a Palindrome";
    }
    else {
    cout<<"String is NOT a Palindrome";
    }
    return 0;
}