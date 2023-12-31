#include<iostream>
using namespace std;


void transposearr(int arr[][3],int cols,int rows,int transpose[][3]){
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            transpose[j][i]  = arr[i][j];
        }
    }
}
void print(int arr[][3],int cols,int rows){
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
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
cout<<"Printing array "<<endl;
print(arr,rows,col);
cout<<"Transpose matrix"<<endl;
int transpose[3][3];
transposearr(arr,col,rows,transpose);
print(transpose,rows,col);



}