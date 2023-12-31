#include<iostream>
using namespace std;
int raja = 45;
//global variable...
int main()
{
    //varaible scoping.....
    //declaration
    int a;
    //intialization
    int b =5;
    //updation
    b= 10;


    if(true)  
    {

        //local variable...
      int   b= 15;
        cout<<b<<endl;
        cout<<raja;
    }
    cout<<b<<endl;


    //switch statement... (using only in 2 data type)

    //char type
    // char val;
    // cout<<"Enter the value";
    // cin>>val;

    // switch(val)
    // {
    //     case 'h': cout<<"Hlo";
    //     break;
    //     case 'i': cout<<"World";
    //     break;
    //     case 'j' : cout<<"Duniya";
    //     break;
    //     default:cout<<"Default value";


    // } 

    //integer
     int val;
    cout<<"Enter the value";
    cin>>val;
    switch(val)
    {
        case 1: cout<<"Hlo";
        break;
        case 2: cout<<"World";
        break; 
        default:cout<<"Default value";


    }
}