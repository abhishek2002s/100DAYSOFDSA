#include<iostream>
#include<vector>
#include<string.h>
using namespace std; 

// Given two integers M & N, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.

int multiplyNumbers(int m, int n) {
    if(n <= 0)
        return 0;
    return m + multiplyNumbers(m,n-1);
}

int main()
{
    int ans = multiplyNumbers(4,3);
    cout<<ans;
}