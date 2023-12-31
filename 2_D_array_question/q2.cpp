#include<iostream>
using namespace std;

bool findKey(int arr[][3],int cols,int rows,int key)
{

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(arr[i][j]==key){
                return true;
            }
        }
    }
return false;
}




int main()
{
    int arr[3][3] ={
        {1,2,3},
        {4,5,6},
        {7,8,9}};

    int rows =3;
    int col = 3;
cout<<findKey(arr,rows,col,6);



}