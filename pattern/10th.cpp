#include<iostream>
using namespace std;

int main()
{

    // hollow sqaure pattern 
 int n ;
 cin>>n;


 for(int row =0;row<n;row++)
 {
    if(row==0 || row ==n-1)
    {
        for(int col =0;col<n;col++)
        {
            cout<<"* ";
        }
    }
    else
    {
        cout<<"* ";
        for(int space = 0;space<n-2;space++)
        {
            cout<<"  ";
        }
        cout<<"* ";
    }
    cout<<endl;
 }





}