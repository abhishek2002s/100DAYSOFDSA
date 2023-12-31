#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
 //full pyramid... and hollow pyramiddd


//hollow pyramid....
for(int i=0;i<n;i++)
{
    for(int j=0;j<(n-i-1);j++)
    {
        cout<<"  ";
    }
    for(int j=0;j<(2*i+1);j++)
    {
        if(j==0 || j == 2*i || i==n-1){
        cout<<"* ";
        }
        else
        {
            cout<<"  ";
        }
    }
    cout<<endl;
}


cout<<endl;

//full pyramid
for(int i=0;i<n;i++)
{
    for(int j=0;j<(n-i-1);j++)
    {
        cout<<"  ";
    }
    for(int j=0;j<(2*i+1);j++)
    {
        cout<<"* ";
    }
    cout<<endl;
}





}