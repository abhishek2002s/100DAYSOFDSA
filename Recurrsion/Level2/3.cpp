#include<iostream>
using namespace std;

//print maximumm elemetn in array using recurssion::

void findMax(int arr[],int n,int i,int& maxi)
{
 if(i>=n){
    //array agar khtm hogya, poora traveserse hogya
    //toh wapas aajao
    return ;
 }

 //1case krna h
 //current element ko check karo for max;
 if(arr[i]>maxi){
    maxi =arr[i];

 }

 //baki recurssion sambhal lega
 findMax(arr,n,i+1,maxi);
}

//print minimum elemetn in array using recurssion::
void finmin(int arr[],int n,int i,int& mini)
{
 if(i>=n){
    //array agar khtm hogya, poora traveserse hogya
    //toh wapas aajao
    return ;
 }

 //1case krna h
 //current element ko check karo for max;
mini = min(mini,arr[i]);

 //baki recurssion sambhal lega
 finmin(arr,n,i+1,mini);
}


int main()
{
    int arr[7] = {10,20,30,40,50,78,56};
    int n = 7;
  int maxi = INT64_MIN;
  int mini = INT8_MAX;
  int i=0;
  findMax(arr,n,i,maxi);
  cout<<"Maximum number is "<<maxi<<endl;
  finmin(arr,n,i,mini);
  cout<<"Minimum number is "<<mini<<endl;
}