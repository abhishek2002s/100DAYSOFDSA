#include<iostream>
using namespace std;

//Floid Traungel patterm 

int main()
{
    int n;
    cin>>n;


int sum =1;

for(int i=0;i<n;i++)
{
    for(int j=0;j<=i;j++)
    {
        cout<<sum;
        sum++;
          }
          cout<<endl;
}



}