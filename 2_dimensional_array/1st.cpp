#include<iostream>
using namespace std;

int main()
{
    //declare 2D array
    int arr[3][2];


    //intialization of 2-D array
    int brr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}};


//print in row wise
//outer loop
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++){
    cout<<brr[i][j]<<" ";
}
cout<<endl;
}
cout<<endl;
//print in column wise
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++){
    cout<<brr[j][i]<<" ";
}
cout<<endl;
}

}