 #include <bits/stdc++.h>
using namespace std;
 
 //this program only reverse the word only not an(space,number,specail cahracter)
 string reverseOnlyLetters(string s) {
        int l =0;
        int h = s.size();

        while(l<=h){
            if(isalpha(s[l]) && isalpha(s[h])){
                swap(s[l],s[h]);
                l++,h--;
            }
            else if(!isalpha(s[l])){
                l++;
            }
            else{
                h--;
            }
        }
        return s;
    }

    int main(){
        string s = "this-is-me3$how!areyou**";
         cout<<reverseOnlyLetters(s);
    }