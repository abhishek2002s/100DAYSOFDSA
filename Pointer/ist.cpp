#include<iostream>
using namespace std;

int main()
{


    int a = 5;
    int b =5;
    cout<<a<<endl;

    //it shows the address of variable
    cout<<&a<<endl;
    cout<<&b<<endl;

//pointer creation::
//create a pointer to integer type

int c =5;
int* ptr = &c; 

//acess the value ptr is ponting to 
// cout<<*ptr;
cout<<"Address of c is : "<<&c<<endl;
cout<<"Value stored at ptr is "<<ptr<<endl;
cout<<"Address of  ptr is "<<&ptr<<endl;
cout<<"value ptr is pointing to is : "<<*ptr<<endl;
     


}