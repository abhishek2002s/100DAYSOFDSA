#include<iostream>
using namespace std;
//print digit of a number
int main()
{



//q2
int digit[] = {8,2,3,7};
int ans = 0;

for(int i=0;i<4;i++)
{
    ans = ans * 10 + digit[i];
}
cout<<ans;

//q1
int n;
cin>>n;
while(n!=0)
{
    int rem = n%10;
    cout<<rem<<" ";
    n=n/10;
 }




} 