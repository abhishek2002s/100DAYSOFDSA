#include<iostream>
using namespace std;
//Numeric Hollow Half pyramid
int main()
{
int n;
cin>>n;

for(int i=0;i<n;i++)
{
    for(int j = 0;j<i+1;j++)
    {
        if(j==0 || i==n-1 || i==j)
        {
            cout<<j+1;
        }
        else
        {
            cout<<" ";
        }

    }
    cout<<endl;
}

}