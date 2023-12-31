#include<iostream>
using namespace std;

int main()
{
    //Array declaration

    // int arr[7]; //integer type
    // char arr[106]; //character type
    // bool arr[23];  //bool type
    // cout<<"Array declared successfuly";


    //Array Initailization

    //static array
    // int arr[] = {2,3,4,5,7};
    // int brr[10] = {2,3,4,5,7};
    // int crr[5] = {2,3,4,5,7};
    // int crr[4] = {2,3,4,5,7}; // It will create error
    cout<<"Array initialized successfuly"<<endl;

 

//Accessing value from index of array
//  int drr[] = {1,4,5,7,8};
 

//  //print value at 4th index
//  cout<<arr[4]<<endl;

//  //printing all the value
// for(int i=0;i<5;i++)
// {
//     cout<<drr[i]<<" ";
// }


int  arr[10];
cout<<"Enter the input values in array "<<endl;
//Taking input in array
for(int i=0;i<10;i++)
{
    cin>>arr[i];
}

//printing the array
cout<<"Printing the array";
for(int i=0;i<10;i++)
{
    cout<<arr[i]*2<<" ";
}
    return 0;
}