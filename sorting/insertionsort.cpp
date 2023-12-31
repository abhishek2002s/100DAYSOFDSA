#include<iostream>
#include<vector>
using namespace std;

//insertion shift..


int main()
{
 vector<int> arr{5,4,3,2,1};
 int n = arr.size();
int j;
//outer loop
for(int i=1;i<n;i++)
{
    //step 1 -> fetch
    int value = arr[i];
    //step 2-> compare
    for( j = i-1;j>=0;j--)
    {
        if(arr[j]>value)
        //step-3 -> shift
        arr[j+1] = arr[j];
        else
        break;

    }
    //step 4->copy
    arr[j+1] = value;

}
 //printing
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}