#include<iostream>
#include<vector>
using namespace std;

// triplet pair sum of array:


int main()
{


    vector <int> arr{10,20,30,40,60,70};
int sum = 80;


    // //print  triplet all pair
    // //outer loop will traverse for each element
//     for(int i =0;i<arr.size();i++)
//     {
//         int element = arr[i];
//         //for every elemnt ,will traverse on agge elemnt
//         for(int j=i+1;j<arr.size();j++)
//         {
//         for(int k=j+1;k<arr.size();k++)
//         {
//            cout<<"("<<element<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
//          }
// }
// }
    
    //triplet pair sum************

    for(int i =0;i<arr.size();i++)
    {
        int element = arr[i];
        //for every elemnt ,will traverse on agge elemnt
        for(int j=i+1;j<arr.size();j++)
        {
        for(int k=j+1;k<arr.size();k++){
           if(element + arr[j] + arr[k] == sum)
           {
           cout<<"("<<element<<","<<arr[j]<<","<<arr[k]<<")";
           }
        }
        }
    }

    }
  