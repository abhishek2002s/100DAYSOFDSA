#include<iostream>
#include<vector>
using namespace std;
//print digit of number using recurrsion

void printDigit(int n){
    //base
    if(n==0)
    {
        return;
    }
  //recurrsion relation
       int newvalueN= n/10;
      printDigit(newvalueN);
    //1 case
    int digit = n%10;
    cout<<digit<<" ";

  
}


int main()
{
   int n= 647;
   if(n==0)
   {
    cout<<0<<endl;
   }
   printDigit(n);

}