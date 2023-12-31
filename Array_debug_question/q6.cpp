#include<iostream>
using namespace std;

//missing element with duplicate of an array.............
void missingElement(int *arr,int n){

    for(int i=0;i<n;i++)
    {
        int index = abs(arr[i]);
        if(arr[index-1] >0 ){
            arr[index-1] *= -1;
        }
    }

        for (int i=0;i<n;i++)
        {
            if(arr[i]>0){
                cout<<i+1<<" ";
            }
        }

    

}

int main()
{
    int arr[] = {1,2,2,2,5};
    int n;
     n = sizeof(arr)/sizeof(int);
     missingElement(arr,n);
}