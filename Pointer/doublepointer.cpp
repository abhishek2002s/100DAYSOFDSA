#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Pointer to pointer approach *******

    int a = 5;

    int* p = &a;

    int** q = &p;



    cout<<&a<<endl;
    cout<<a<<endl;

    cout<<p<<endl;
    cout<<&p<<endl;

    cout<<*p<<endl;
    cout<<q<<endl;

    cout<<&q<<endl;
    cout<<*q<<endl;
    
    cout<<**q<<endl;

}