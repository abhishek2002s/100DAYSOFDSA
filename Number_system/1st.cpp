#include<iostream>
#include<math.h>
using namespace std;
int db(int n)
{
    //bit wise method
    int bn  =0;
    int i=0;
    while(n>0){
        int bit = (n&1);
        bn = bit*pow(10,i++) + bn;
        n =  n >> 1;
        
    }
 return bn;
}
//Convert decimal to binary
int decimalToBinary(int n)
{
    //division method
    int binaryNum = 0;
        int i=0;
    while(n>0)
    {
        int bit = n%2;
        binaryNum = bit*pow(10,i++)+binaryNum;
        n=n/2;
    }
    return binaryNum;
}

int main()
{
    int n;
    cin>>n;

int binary = decimalToBinary(n);
int bn = db(n);
cout<<binary;
cout<<endl;
cout<<bn;

}
