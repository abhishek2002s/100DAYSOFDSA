#include<iostream>
#include<string.h>
using namespace std;

bool isPallindrome(string&s,int start,int end){
    //base case
    if(start>=end){
        return true;
    }

    //one case solution
    if(s[start] != s[end]){
        return false;
    }

    //recurssion
    return isPallindrome(s,start+1,end-1);
}


int main()
{
    string s;
    cin>>s;
    cout<<isPallindrome(s,0,s.size()-1);

}