#include<iostream>
#include<vector>
using namespace std;

void printSubsequence(string str,string output,int i,vector<string>& v){
    //base case
    if(i>=str.length()){
        
        //to store ina another vector
       v.push_back(output);
        return;
    }

    //exclude
    printSubsequence(str,output,i+1,v);

    //include
    // output.push_back(str[i]);

    output = output + str[i];
    printSubsequence(str,output,i+1,v);
}

int main()
{
    string str = "abc";
    string output = "";
    vector<string>ans;


    int i=0;
    printSubsequence(str,output,i,ans);

cout<<"Printing all subsequences "<<endl;
    for(auto val:ans)
    {
             cout<<"{"<<val<<"}"<<endl;
    }
}