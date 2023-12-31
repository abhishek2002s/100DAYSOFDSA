#include<iostream>
using namespace std;

//Butterfly Pattern 

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        //half pyramid..
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
      //spaces ..
        for(int j=0;j<2*n-2*i-1;j++)
        {
            cout<<" ";
        }
        //hallf pyramid..
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        //half pyramid..
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
      //spaces ..
        for(int j=0;j<2*i+1;j++)
        {
            cout<<" ";
        }
        //hallf pyramid..
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}