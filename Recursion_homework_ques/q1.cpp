#include<iostream>
#include<string>
using namespace std;

//Last occurence of a string(using recurssion)

void lastOccLTR(string&s,int x,int i,int&ans){
    //base case
    if(i>=s.size()){
        return;
    }

    //ek case solve
    if(s[i] == x){
        ans = i;
    }

    //recursssion sol
    lastOccLTR(s,x,i+1,ans);
}


void lastOccRTL(string&s,int x,int i,int&ans){
    //base case
    if(i<0){
        return;
    }

    //ek case solve
    if(s[i] == x){
        ans = i;
        return;
    }

    //recursssion sol
    lastOccRTL(s,x,i-1,ans);
}

int main(){
    string s;
    cin>>s;

    char x;
    cin>>x;

    int ans = -1;
    // lastOccLTR(s,x,0,ans);
    lastOccRTL(s,x,s.size()-1,ans);
    cout<<ans<<endl;
}