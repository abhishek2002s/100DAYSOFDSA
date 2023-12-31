#include<iostream>
using namespace std;

//Maximum numner in an array
int main()
{
    int arr[] = {2,3,4,5,6,3,9,12,56,78};
    int maxNum = INT32_MIN;
    int size = 11;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>maxNum)
        {
            maxNum = arr[i];
        }
    }
    cout<<"Maximum number is "<<maxNum<<endl;
}