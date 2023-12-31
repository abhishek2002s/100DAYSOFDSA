 #include <bits/stdc++.h>
using namespace std;

//Longest pallindromic substring

class Solution {
public:
bool ispallindrome(string s ,int start ,int end ){
    while(start<=end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}


    string longestPalindrome(string s) {
        string ans = "";

        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<s.size();j++)
            {
                if(ispallindrome(s,i,j)){
                 string t= s.substr(i,j-i+1);

                 ans = t.size()>ans.size()?t:ans;
                }
            }
        }
        return ans;
    }
};