#include<iostream>
using namespace std;
//factrial of number

int factorial(int n){
    int fact =1;

    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    return fact;
}

int main()
{
    int num;
    cin>>num;

    int result  = factorial(num);
    cout<<"Factorial of number is "<<result;
}