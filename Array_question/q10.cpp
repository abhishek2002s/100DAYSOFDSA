#include<iostream>
#include<vector>
using namespace std;

//pair sum of array:


int main()
{


    vector <int> arr{10,20,30,40,60,70};
int sum = 80;


    // //print all pair
    // //outer loop will traverse for each element
    // for(int i =0;i<arr.size();i++)
    // {
    //     int element = arr[i];
    //     //for every elemnt ,will traverse on agge elemnt
    //     for(int j=i+1;j<arr.size();j++)
    //     {
    //         cout<<"("<<element<<","<<arr[j]<<")"<<endl;
    //     }
    
    for(int i =0;i<arr.size();i++)
    {
        int element = arr[i];
        //for every elemnt ,will traverse on agge elemnt
        for(int j=i+1;j<arr.size();j++)
        {
           if(element + arr[j] == sum)
           {
           cout<<"Result found"<<"("<<element<<","<<arr[j]<<")";
           }
        }
    }

    }
  