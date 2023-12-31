#include<iostream>
using namespace std;


int main()
{
// numeric palindriome pyramid;;

int n;
cin>>n;

for(int i=0;i<n;i++)
{
    for(int j = 0;j<i+1;j++)
    {
        cout<<j+1;
    }
    for(int j=i;j>=1;j--)
    {
        cout<<j;
    }
cout<<endl;

}
cout<<endl;
// Alphabetic palindriome pyramid;
for(int i=0;i<n;i++)
{
    for(int j = 0;j<i+1;j++)
    {
        int ans = j+1;
        char ch = ans+'A'-1;
        cout<<ch;
    }
    for(int j=i;j>=1;j--)
    {
        int ans  = j;
        char ch = ans + 'A'-1;
        cout<<ch;
    }
cout<<endl;
}

}