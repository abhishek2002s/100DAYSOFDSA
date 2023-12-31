#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

// Letter Combinations of a Phone Number ***

class Solution {
public:


void solve(     vector<string> &ans,int index,string output,string digits, vector<string> &mapping){
    //base case
    if(index >= digits.length()){
        ans.push_back(output);
        return;
    }

    //1 case recursion sambhal lega
    int digit = digits[index] - '0';
    string value = mapping[digit];

    for(int i=0;i<value.length();i++){
        char ch = value[i];
        output.push_back(ch);
        solve(ans,index+1,output,digits,mapping);

        //backtracking
        output.pop_back();
    }
}






    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        int index= 0;
        string output = "";
        vector<string> mapping(10);

        mapping[2] =  "abc";
        mapping[3] =  "def";
        mapping[4] =  "ghi";
        mapping[5] =  "jkl";
        mapping[6] =  "mno";
        mapping[7] =  "pqrs";
        mapping[8] =  "tuv";
        mapping[9] =  "wxyz";

        if(digits.length() == 0){
            return ans;
        }

        solve(ans, index,output,digits,mapping);
        return ans;
        
        
    }
};