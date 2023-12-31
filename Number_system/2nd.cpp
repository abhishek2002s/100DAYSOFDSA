#include<iostream>
#include<math.h>
using namespace std;

//binary to decimal
int binaryTodecimal(int n){
    int decimal =0;
    int i=0;

    while(n)
    {
        int bit = n%10;
        decimal = decimal + bit *pow(2,i++);
        n = n/10;
    }
    return decimal;
}

int main()
{
    int n;
    cin>>n;

    int bd = binaryTodecimal(n);
    cout<<bd;
}