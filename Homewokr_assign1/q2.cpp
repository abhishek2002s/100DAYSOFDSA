#include<iostream>
using namespace std;
//Numeric  inverted Hollow Half pyramid

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(i==0 || j== i+1 || j==n)
            {
                cout<<j;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}