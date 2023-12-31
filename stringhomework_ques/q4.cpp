 #include <bits/stdc++.h>
using namespace std;

//Reverse a vowel in a string
class Solution {
public:
bool isVowel(char ch)
{

char c = tolower(ch);
if(c == 'a' || c=='e' || c == 'i' || c == 'o' || c=='u'){
    return true;
}
else{
    return false;
}

}

    string reverseVowels(string s) {
       int l =0;
       int h = s.size();

       while(l<=h){
           if(isVowel(s[l]) && isVowel(s[h])){
               swap(s[l],s[h]);
               l++;
               h--;
           }
           else if(isVowel(s[l])==0){
               l++;
           }
           else{
               h--;
           }
       }
       return s;
    }
};