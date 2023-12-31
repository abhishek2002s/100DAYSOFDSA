#include<iostream>
#include<math.h>
using namespace std;

//REverse a integer

int main()
{
    int n;
    cin>>n;
bool isneg =false;
int rev = 0;
if(n<0)
{
    isneg = true;
    n = -n;
}

while(n>0)
{
    int digit = n%10;
    rev = rev*10 + digit;
    n = n/10;
}
int ans = isneg?-rev : rev;
cout<<ans<<endl;
return 0;
}