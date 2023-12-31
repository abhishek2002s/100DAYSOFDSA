#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int target)
{
    int s =0;
    int e = size-1;
    int mid = (s+e)/2;

    while(s<=e)
    {
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            //seeach in left
            e = mid-1;
        }
        else{
            s= mid+1;
        }
        mid =(s+e)/2;
    }
    return -1;

}



int main()
{
    int arr[] = {2,4,6,8,24,56};
    int size = 6;
    int target = 8;

    int indexofTarget = binarySearch(arr,size,target);

    if(indexofTarget ==-1)
    {
        cout<<"Target not found "<<endl;
    }
    else{
        cout<<" Target found at "<<indexofTarget<<endl;
    }
    return 0;
}