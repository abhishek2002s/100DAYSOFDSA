#include<iostream>
using namespace std;

int main()
{
    int a = 5;

    int* p = &a;

    int** ptr = &p;

    **ptr = **ptr +1;

    // cout<<"Value of a : " << a << endl;
    
    cout<<a<<endl;

    return 0;
}