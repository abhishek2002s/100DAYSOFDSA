#include<iostream>
#include<string>
#include<string.h>
using namespace std;



int main(){
     char buf[200] = "computer program";

    char x = 'p';
    
    char* ptr = strchr(buf,x);
    cout<<ptr<<endl;
}