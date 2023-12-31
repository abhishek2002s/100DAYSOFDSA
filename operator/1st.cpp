#include<iostream>
using namespace std;

int main()
{
    bool x = false;
    bool y = false;

    cout<<(x&y); // ans operator

    cout<<(x|y); // or operator

    cout<<(~x); // not operator

    cout<<(x^y); // Xor operator

    // //for ex 
    cout<<(5&10);

    // for ex 
    cout<<(3|4);

    // Left Shift operator(multiply by 2)
    int d =12;
    d = d<<1;
    cout<<d;

    //Right SHift operator
    int c = 27;
    c=c>>1;
    cout<<c;

    // pre_increment operator...
     int a = 5;
     cout<<++a;
     cout<<endl;
     // post_iincrement operator...
     int b = 5;
     cout<<b++;
     cout<<endl;

     // after increment the value
     cout<<b;
     cout<<endl;
    
int z = 5;
cout<<(++z)*(++z);

cout<<endl;

//break Statement
int n = 5;
for(int i=0;i<n;i++)
{
    cout<<"Hllo";
    break;

}
cout<<"world";

//continue statement
for(int i=0;i<4;i++)
{
    if(i==3)
{
    continue;
}
    cout<<i;

}    

}