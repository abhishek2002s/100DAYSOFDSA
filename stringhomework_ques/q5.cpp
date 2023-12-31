 #include <bits/stdc++.h>
using namespace std;

//check wehter the string is isomorphic or not

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(t.size()!=s.size()){
            return false;
        }
        int hash[256] = {0};
        bool ischartMapped[256] = {0};

        for(int i=0;i<s.size();i++){
            if(hash[s[i]]==0 && ischartMapped[t[i]]==0){
                hash[s[i]] = t[i];
                ischartMapped[t[i]] = true;
            }
        }

        for(int i=0;i<s.size();i++){
            if(char(hash[s[i]] != t[i])){
                return false;
            }
        }
        return true;
    }
};