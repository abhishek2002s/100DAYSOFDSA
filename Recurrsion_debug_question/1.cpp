#include<iostream>
using namespace std;

int fun(int a,int b)
{
    if(b==0)
    {
        return 0;
    }
    if(b==1)
    {
        return a;
    }
    
    return a + fun(a,b-1);
}

int main()
{
   int ans =  fun(3,8);
cout<<ans;
}