#include<iostream>
#include<vector>
using namespace std;

// reverse a word in a string

void reverseWords(string s)
{
    vector<string> tmp;
    string str = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            tmp.push_back(str);
            str = "";
        }
        else{
            str += s[i];
        }
    
    }
    tmp.push_back(str);
    
    for(auto i:tmp){
        cout<<i;
    }

}

int main()
{
    string s = "hlo ji kaise";
   reverseWords(s);
}