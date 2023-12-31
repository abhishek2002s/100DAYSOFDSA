
#include<iostream>
#include<string>
using namespace std;

//check wehter the string is pallindrome or not
string isPalindrome(string S)
{
		int N = S.length();
    for (int i = 0; i < (N/2)-1; i++) {
		    if (S[i] != S[N-i-1]) {
            return "No";
        }
    }
    return "Yes";
}

int main()
{
    string s = "rahul";
    cout<<isPalindrome(s);
}