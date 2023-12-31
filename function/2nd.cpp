#include<iostream>
using namespace std;

//Write a fucntion to add 2 number
int Add(int a ,int b)
{
    int result = a+b;
    return result;
}



int main()
{
int a;
cout<<"Enter the first number";
cin>>a;
int b;
cout<<"Enter the second number";
cin>>b;

int sum = Add(a,b);
cout<<"Additon result is "<<sum;

return 0;
}