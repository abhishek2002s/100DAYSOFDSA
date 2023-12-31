#include<iostream>
using namespace std;

int main()
{

// // *************character array in an string************
char ch[10] = "Babbar";

char* c =ch;

cout<<ch<<endl;
cout<<&ch<<endl;
cout<<ch[0]<<endl;

cout<<*c<<endl;
cout<<c<<endl;
cout<<&c<<endl;



char  name[20] = "HelloWorld";
char* d = &name[0];

cout<<name<<endl;
cout<<&name<<endl;
cout<<*(name+3)<<endl;
cout<<d<<endl;
cout<<&d<<endl;
cout<<*(d+3)<<endl;
cout<<d+2<<endl;
cout<<*d<<endl;
cout<<d+8<<endl;



char dh = 'k';
char* cptr = &dh;

cout<<cptr<<endl;





char* e ="babbar";
cout<<e<<endl;



}