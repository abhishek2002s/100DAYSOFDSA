#include<iostream>
using namespace std;

void fun()
{
    fun();
}

int main()
{
    fun();
    cout<<"Hello world "<<endl;
}