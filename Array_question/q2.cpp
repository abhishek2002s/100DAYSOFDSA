#include<iostream>
using namespace std;

//count number of ones and zeroes

int main()
{
    int  arr[] = {0,0,0,1,1,1,1,0,1};
    int size = 15;

    int numzero = 0;
    int numone = 0;

    for(int i =0;i<size;i++)
    {
        //if zero found , increment numzero
        if(arr[i]==0){
        numzero++;
        }
        //one found ,increment numone
        if(arr[i]==1)
        {
            numone++;
        }
    }
    cout<<"number of zeros are "<<numzero<<endl;
    cout<<"number of ones are "<<numone<<endl;
}