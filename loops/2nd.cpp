#include<iostream>
using namespace std;

int main()
{

//q5
    for(int i=1;i<=5;i=i+2)
    {
        cout<<i<<endl;
    }


cout<<endl;

//q6
    for(int i=1;i<10;i=i*2)
    {
        cout<<i<<endl;
    }

    //q7 

    for(int i=100;i>0;i=i/2)
    {
        cout<<i<<endl;
    }

    //q8

    for(int i=5;(i>=0&&i<=10);i++)
    {
        cout<<i<<endl;
    }

    //q9 
    int i = 0;
    for(;;)
    {
      if(i<5){
        cout<<i<<endl;
        i=i+1;
      }
    }


    //****q10
    int n;
    if(cin>>n)
    {
        cout<<"Babbar"<<endl;
    }
}