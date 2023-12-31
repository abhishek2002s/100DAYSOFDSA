#include<iostream>
#include<vector>
using namespace std;

//sort 0s and 1s:


int main()
{


    vector <int> arr{0,1,0,1,1,1,1,0,1,0,0,0,1,1};


int start = 0;
int end = arr.size()-1;
 int i=0;

 while(start<=end)
 {
    if(arr[i]==0)
    {
        //swap from left
        swap(arr[start],arr[i]);
        i++;
        start++;
    }
 
    if(arr[i]==1)
    {
        //swap from right
        swap(arr[end],arr[i]);
        end--;
    }
 }


//print sort 0s and 1s

for(auto values:arr)
{
    cout<<values<<" ";
}

    }
  