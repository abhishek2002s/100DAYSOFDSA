#include<iostream>
using namespace std;

int fastExponent(int a,int b){
int ans = 1;

while(b>0)
{
    if(b&1)
    {
        //odd
        ans = ans*a;
    }
    a =a*a;
    b>>=1;
}
return ans;

}
int slowExponent(int a,int b){
    int ans = 1;

    for(int i=0;i<b;i++)
    {
        ans = ans *a;
    }
    return ans;
}

int main()
{
    cout<<slowExponent(5,4)<<endl;
    cout<<fastExponent(5,4)<<endl;
}