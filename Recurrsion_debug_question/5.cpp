#include<iostream>
using namespace std;


bool fun(int n)
{
   if(n==0) return true;
   if(n==1) return false;
   if(n%2==0) return fun(n/2);
   return false;
}

int main()
{
    if(fun(553)){
        cout<<true;
    }
    else{
    cout<<false;
    }
    
    return 0;
   
}