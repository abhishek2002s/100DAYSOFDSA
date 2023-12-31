#include<iostream>
using namespace std;


//scope of variables :: 


int x = 2; // global variabble

void fun()
{
    int x = 60;
    cout<<x<<endl;
    cout<<::x<<endl;
}

int main()
{
    x =4; // global access
    int x =20;// loacal to main function
    cout<<x<<endl;

    cout<<::x<<endl; // accessign global with ::

{
    int x = 50;
    cout<<x<<endl;
    cout<<::x<<endl;
}
fun();

}