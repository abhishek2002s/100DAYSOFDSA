#include<iostream>
using namespace std;

void printRowwisesum(int arr[][3],int rows,int cols){

//row wise sum
cout<<"Print row wise sum"<<endl;

for(int i=0;i<rows;i++)
{
    int sum =0;
    for(int j=0;j<cols;j++)
    {
        sum = sum + arr[i][j];
    }
    cout<<sum<<endl;

}


}
void printcolwwisesum(int arr[][3],int rows,int cols){

//row wise sum
cout<<"Print col wise sum"<<endl;

for(int i=0;i<rows;i++)
{
    int sum =0;
    for(int j=0;j<cols;j++)
    {
        sum = sum + arr[j][i];
    }
    cout<<sum<<endl;

}


}


int main()
{
    int arr[3][3] ={
        {1,2,3},
        {4,5,6},
        {7,8,9}};

    int rows =3;
    int col = 3;
    printRowwisesum(arr,rows,col);
    printcolwwisesum(arr,rows,col);
}