#include<iostream>
using namespace std;

//Fancy Pattern #1

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int start_no = 8-i;
        int num = i+1;
        int count = num;

        for(int j=0;j<17;j++)
        {
            if(j==start_no && count>0)
            {
                cout<<num;
                start_no+=2;
                count--;
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;

    }
}

   