// Problem: Given integers a and b, compute a^b using recursion without using power() function.

// Input:
// - Two space-separated integers a and b

// Output:
// - Print a raised to power b

// Example:
// Input:
// 2 5

// Output:
// 32

// Explanation: 2^5 = 2 * 2 * 2 * 2 * 2 = 32
#include <iostream>

using namespace std;

int power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    return a*power(a,b-1);
}
int main()
{
    int a,b;
    cout<<"Enter the base: ";
    cin>>a;
    cout<<"Enter the power: ";
    cin>>b;
    a=power(a,b);
    cout<<"Output is: "<<a;
}