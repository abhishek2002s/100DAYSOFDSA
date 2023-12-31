#include<iostream>
using namespace std;

int main()
{

    //nested if-else::
    int marks;
    cin>>marks;

    if(marks>=90)
    {
        cout<<"A grade";
    }
    else
    {
        if(marks>=80)
        {
            cout<<"B grade";
        }
        else
        {
            if(marks>=60){
                cout<<"C grade";
            }
            else
            {
                if(marks>=40)
                {
                    cout<<"D garde";
                }
                else
                {
                    cout<<"F grade";
                }
            }
        }
    }


}