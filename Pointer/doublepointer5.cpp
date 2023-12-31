#include<iostream>
using namespace std;
//Reference varibale

int main()
{
    int a = 5;
    cout<<&a<<endl; 
    // same memory location different name

    //&b is a reference variable+++++
    int&b = a;
    cout<<&b<<endl;

    cout<<a<<endl;
    cout<<b<<endl;


    a++;
    b++;
    cout<<a<<endl;

    cout<<b<<endl;
}