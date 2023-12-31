#include<iostream>
using namespace std;
int cnt =0;

void fun(int n)
{
    if(n==0)
    {
        return ;
    }

    cnt++;
    fun(n/10);
}

int main()
{
    fun(999999999);
    cout<<cnt;
    return 0;
   
}