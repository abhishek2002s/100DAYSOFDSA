#include<iostream>
using namespace std;

int fib(int n){
    //base case
    if(n==1){
    //first term
    return 0;
    }
    if(n==2)
    {
        //second base 
        return 1;
    }

//recursive relation
int ans = fib(n-1) + fib(n-2);
 
return ans;
}

int main()
{
    int n;
    cout<<"Enter the term you want to see "<<endl;
    cin>>n;

    int ans = fib(n);
    cout<<n<<"th term is : "<<ans<<endl;

    return 0;
}