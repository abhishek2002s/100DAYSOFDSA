#include <bits/stdc++.h>
#include<string.h>
//Remove outermost parenthesis
using namespace std;
class Solution {
public:
    string removeOuterParentheses(string s) {
        int n =s.size();
        string ans;
      int count = 0;
      int j= 0;

      for(int i=0;i<n;i++){
        if(s[i]=='('){
            if(count == 0){
    
            }
            else{
                count++;
                ans.push_back(s[i]);
            }
        }
        else{
            if(count ==1){
                count--;
            }
            else{
                count--;
                ans.push_back(s[i]);
            }
        }
      }
      return ans;
    }
    };