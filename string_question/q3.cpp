//Valid Pallindrome II

#include<iostream>
#include<string>
using namespace std;

class Solution {
bool checkpallindrome(string s,int i,int j){
    while(i<=j)
    {
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
     }
     return true;
}

public:
    bool validPalindrome(string s) {
    int i=0;
    int j = s.length()-1;

    while(i<=j){
        if(s[i]!=s[j]){
            return checkpallindrome(s,i+1,j) || checkpallindrome(s,i,j-1);

        }
        else{
            i++;
            j--;
        }
    }
    return true;
    }
};