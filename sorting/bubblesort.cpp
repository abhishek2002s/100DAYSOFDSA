#include<iostream>
#include<vector>
using namespace std;

//bubble sort

int ooptimalcode(vector<int> arr,int n)
{

    for(int i=0;i<n-1;i++)
{
    bool swaped = false;
for(int j = 0;j<n-i-1;j++)
{
    if(arr[j]>arr[j+1])
    {
        swaped = true;
        swap(arr[j],arr[j+1]);
    }
}
if(swaped == false)
{
    //sort ho chuka hai ,no need to check
    break;
}
}

//print
  for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}

//Bubble sort
int main()
{
 vector<int> arr{5,4,3,2,1};
 int n = arr.size();


//bubble sort
//outer loop
for(int i=0;i<n-1;i++)
{
for(int j = 0;j<n-i-1;j++)
{
    if(arr[j]>arr[j+1])
    {
        swap(arr[j],arr[j+1]);
    }
}


}

//print
 //printing
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

ooptimalcode(arr,n);

}