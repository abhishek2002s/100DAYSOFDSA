#include<iostream>
using namespace std;

int main()
{
    //NUmeric hollow pyramid;;

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        //spaces
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        //nummeric with sapces
        int start = 1;
        for(int j=0;j<2*i+1;j++)
        {
            if(i==0||i==n-1)
            {
                if(j%2==0)
                {
                cout<<start;
                start++;
                }
                else {
                    cout<<" ";
                }
            }
            else
            {
                if(j==0)
                {
                    cout<<"1";
                }
                else if(j==2*i)
                {
                    cout<<i+1;
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}