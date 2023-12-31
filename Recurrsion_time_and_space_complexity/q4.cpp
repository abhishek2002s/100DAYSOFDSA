#include <bits/stdc++.h>
using namespace std;

//t.c = O(2^n)
//s.c = O(n)

int fib(int n){ 
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1) + fib(n-2);
   
}

int main()
{ 
  int n =8;
//   fib(n);
for(int i =0;i<n;i++)
{
    cout<<fib(i)<<" ";
}
} 