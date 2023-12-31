#include <bits/stdc++.h>
using namespace std;

//t.c = O(n)
//s.c = O*(n)
void printArray(int a[],int n){
    if(n==0)
    {
        return;
    }
    cout<<*a<<" ";
    printArray(a+1,n-1);
}

int main()
{ 
  int a[] = {1,2,3,4};
  int n =4;
 printArray(a,n);
} 