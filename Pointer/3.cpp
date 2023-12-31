#include<iostream>
using namespace std;

int main()
{

//Pointer with array >>>>>>>>
    int arr[4] = {12,14,16,18};
cout<<arr+1;
    cout<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;


    int* p  = arr;
    cout<<p<<endl;
    cout<<&p<<endl;


cout<< *arr <<endl;//12
cout<< *arr + 1<<endl;//13
cout<<*(arr) + 1<<endl;//13
cout<<*(arr+1)<<endl;//14
cout<<arr[1]<<endl;
cout<<*(arr+2)<<endl; //16
cout<<arr[2]<<endl;
cout<<*(arr+3)<<endl; //18
cout<<arr[3]<<endl;

// Pointer Important term::


int i =0;
cout<<arr[i]<<endl;
cout<<i[arr]<<endl;
cout<<*(arr+i)<<endl;
cout<<*(i+arr)<<endl; 


int arr[10];
cout<<sizeof(arr)<<endl;// 4 * 10 => 40

int* p = arr;
cout<<sizeof(p)<<endl;//4

cout<<sizeof(*p)<<endl; //4



}