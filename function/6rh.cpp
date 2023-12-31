#include<iostream>
using namespace std;

//sum of even number upto n
int SumOfEven(int n)
{
    int sum =0;
    for(int i=2;i<=n;i+=2)
    {
        
        sum = sum+i;
        
    }
    return sum;
}




int main()
{
    int n;
    cin>>n;

    int result = SumOfEven(n);
    cout<<"Sum of Even number is "<<result;
}