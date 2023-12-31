#include<iostream>
#include<string.h>
using namespace std;

//Remove occurence of a substring*****

class Solution {
public:
void removeStr(string&s,string&part){
    int found = s.find(part);
    if(found != string::npos){
        string left_part = s.substr(0,found);
        string right_part = s.substr(found+part.size(),s.size());
        s= left_part + right_part;

        removeStr(s,part);
    }
    else{
        return;
    }
}
    string removeOccurrences(string s, string part) {
 removeStr(s,part);
 return s;
    }
};