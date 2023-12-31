#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vector<vector<int>>arr;


    // vector<int> a{1,2,3};
    // vector<int> c{8,5,7};
    // vector<int> b{1,2,9};

    // arr.push_back(a);
    // arr.push_back(c);
    // arr.push_back(b);


    // for(int i=0;i<arr.size();i++)
    // {
    //     for(int j=0;j<arr[0].size();j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


// int row = 3;
// int col =5;
//     vector<vector<int> >arr(row,vector<int>(col,0));
//      for(int i=0;i<arr.size();i++)
//     {
//         for(int j=0;j<arr[0].size();j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }


//creation of 2d array using vector
int row = 5;
int col =5;
    vector<vector<int> >arr(row,vector<int>(col,-8));
     for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[0].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}