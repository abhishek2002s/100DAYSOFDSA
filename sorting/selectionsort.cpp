#include<iostream>
#include<vector>
using namespace std;

//selection sort
int main()
{
 vector<int> arr{5,4,3,2,1};
 int n = arr.size();
    //selection sort
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        for(int j= i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                   min = j;
            }
        }
        //swap
        swap(arr[i],arr[min]);
    }

    //printing
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}