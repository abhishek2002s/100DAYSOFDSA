#include<iostream>
using namespace std;
//Reverse an array

int main()
{

int arr[] = {10,20,30,40,50,60};
int size = 6;

int start  = 0;
int end = size-1;

while(start<= end){

    //step 1
    swap(arr[start],arr[end]);
    //step 2
    start++;
    //step3
    end--;
}

for(int i =0;i<size;i++)
{
    cout<<arr[i]<<" ";
}

}