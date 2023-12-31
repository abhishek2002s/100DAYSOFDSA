#include<iostream>
using namespace std;
int maxNum(int arr[][3],int rows,int col){
    int max = INT32_MIN;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]>max)
            {
                max = arr[i][j];
            }
        }
    }
return max;

}
int minNum(int arr[][3],int rows,int col){
    int min = INT32_MAX;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]<min)
            {
                min = arr[i][j];
            }
        }
    }
return min;

}


int main()
{
    int arr[3][3] ={
        {1,2,3},
        {4,5,6},
        {7,8,9}};

    int rows =3;
    int col = 3;
cout<<maxNum(arr,rows,col)<<endl;
cout<<minNum(arr,rows,col);



}