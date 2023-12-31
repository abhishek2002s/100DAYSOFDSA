#include<iostream>
using namespace std;
//find max of three number

int Max(int num1, int num2, int num3)
{
    if(num1>num2 && num1>num3){
        return num1;
    }
    else if(num2>num1 && num2>num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}




int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int result =  Max(a,b,c);
    cout<<"Maximum number is "<<result;

    return 0;
    }

