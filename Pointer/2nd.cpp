#include<iostream>
using namespace std;

int main()
{
int a = 5;
int* p  = &a;
cout<<sizeof(p)<<endl;

char ch = 'b';
char* c  = &ch;
cout<<sizeof(c)<<endl;

double dtr = 5.83;
double* d = &dtr;
cout<<sizeof(d)<<endl;

//BAD practice

int* ptr = 0;
cout<<ptr;

// Pointer Airthmetic******* 
int  a =5;
int* p =&a;

cout<<*p * 2<<endl;
cout<<(*p)++<<endl;
cout<<*p<<endl;
cout<<++(*p)<<endl;
cout<<a+1<<endl;


//pointer - copying
int b =5;
int* ptr  = &b;

//copy pointer
int* dusraptr = ptr;
cout<<*ptr<<endl;
cout<<*dusraptr<<endl;


int a = 10;
int* p = &a;
int* q = p;
int* r = q;

cout<<a<<endl;//10
cout<<&a<<endl;//address of a
cout<<p<<endl;//address of a
cout<<*p<<endl;//value of p = 10;
cout<<&p<<endl;//adress of p
cout<<q<<endl;//address of a
cout<<&q<<endl;// address of q
cout<<*q<<endl;//10
cout<<r<<endl;//adress of a
cout<<&r<<endl;//address of r
cout<<*r<<endl;//10
cout<<(*p + *q + *r)<<endl; //30
cout<<(*p)*2 + (*r)*3<<endl;//50

}