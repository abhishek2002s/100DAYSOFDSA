#include<iostream>
#include<vector>
using namespace std;

//find the key is present in a string or not

void checkkey(string& str,int i,int& n,char& key,vector<int>& ans){
    //base case
    if(i>=n){
        //key not found
        return;
    }
    //1 case solve krdo
    if(str[i]== key){
       ans.push_back(i);
    }
    //baki recurrsion solve krlega
    return checkkey(str,i+1,n,key,ans);
}


int main()
{
    string str = "lovebabbar";
    int n = str.length();

    char key = 'b';
    int i=0;
    vector<int>ans;
    checkkey(str,i,n,key,ans);
    cout<<"printing ans "<<endl;
    for(auto val:ans ){
        cout<<val<<" ";
    }
    cout<<endl;


}