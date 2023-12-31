#include<iostream>
using namespace std;

int main()
{
    int arr[10] ={0};
    cout<<arr<<endl;
    int (*p)[10] = &arr;


    for(int i=0;i<10;i++)
    {
        cout<<(*p)[i]<<endl;
    }
}