#include<iostream>
using namespace std;
//find the key is present in a string or not


int checkkey(string& str,int i,int& n,char& key){
    //base case
    if(i>=n){
        //key not found
        return -1;
    }
    //1 case solve krdo
    if(str[i]== key){
        return i;
    }
    //baki recurrsion solve krlega
    return checkkey(str,i+1,n,key);
}


int main()
{
    string str = "lovebabbar";
    int n = str.length();

    char key = 'r';
    int i=0;
    int ans = checkkey(str,i,n,key);
    cout<<"answer is : "<<ans<<endl;

}