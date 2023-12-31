#include<iostream>
using namespace std;

//checkk nummber is even or odd;

void Checknum(int n)
{
    if(n%2==0)
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }
}

int main()
{
    int num;
    cin>>num;

    Checknum(num);
}