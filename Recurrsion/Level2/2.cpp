#include<iostream>
using namespace std;

//print array question using recurssion::

void print(int arr[],int n,int i)
{
    //base class 1
    if(i>=n)
    {
        return;
    }
   //case solve
   cout<<arr[i]<<"->";
   //recursion relation
   print(arr,n,i+1);
}


int main()
{
    int arr[5] = {10,20,30,40,50};
    int n = 5;
   int i =0;
print(arr,n,i);
}