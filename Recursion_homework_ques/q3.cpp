#include<iostream>
#include<string.h>
using namespace std;

//reverse a string


void reverseString(string&s,int start,int end){

    //base case
    if(start>=end){
        return;
    }

    //ek case
    swap(s[start],s[end]);

    //recurssive call
    reverseString(s,start+1,end-1);
}


int main(){
    string s;
    cin>>s;
int start = 0;
int end = s.size()-1;
    reverseString(s,start,end);
    cout<<s;
}