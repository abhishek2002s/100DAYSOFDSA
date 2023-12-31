#include<iostream>
#include<string>
using namespace std;

bool comaprestr(string a,string b){
    if(a.length()!=b.length()){
        return false;
    }
    else{
        for(int i=0;i<a.length();i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    //string create 
    string str;
    //input
    cin>>str;
    // getline(cin,str);
    //print
    cout<<str;

//length
    cout<<"Lenght of string is"<< str.length()<<endl;

//empty;
cout<<"Empty is "<<str.empty()<<endl;

//push_back
str.push_back('B');
cout<<str<<endl;

//popback
str.pop_back();
cout<<str<<endl;

//substr
cout<<str.substr(0,6)<<endl;


//compare function
string a  = "love";
string b = "lover";
if(a.compare(b)==0){
    cout<<"a and b are exactly same "<<endl;
}
else{
    cout<<"a and b are not same"<<endl;
}

//find function

string  sn = "hello ji kaise ho sare";
string target = "rahul";

// cout<<sn.find(target);
if(sn.find(target) == string::npos){
    cout<<"Not found"<<endl;
}
else{
cout<<sn.find(target);
}

//replce function
string s  = "This is my frist  meggase";
string wrc = "babbar";

s.replace(11,5,wrc);
cout<<s;


//erase function

string  z= "ABCDEFGHIJJKLMNOPQRSTUVWXYZ";
z.erase(8,6);
cout<<z;

    return 0;
}