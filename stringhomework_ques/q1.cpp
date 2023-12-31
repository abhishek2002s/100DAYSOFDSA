#include <bits/stdc++.h>
using namespace std;
//this program check wether the string in anagram or not with another string *****


class Solution {
public:
    bool isAnagram(string s, string t) {
    //second approach
    int freqtable[256] = {0}; //create a frequency array and initlaise with zero
    for(int i=0;i<s.size();i++){
        freqtable[s[i]]++;
    }
    for(int i =0;i<t.size();i++)
    {
        freqtable[t[i]]--;
    }

    for(int i=0;i<256;i++)
    {
        if(freqtable[i]!=0){
            return false;
        }
    }
    return true;

    }
};