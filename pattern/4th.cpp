#include<iostream>
using namespace std;

int main()
{
 //Hollow Rectangle

int rowcount,colcount;
cin>>rowcount>>colcount;

 for(int row = 0;row<rowcount;row++)
 {
  
        if(row == 0 || row==rowcount-1)
        {
              for(int col = 0;col<colcount;col++)
    {
        cout<<"* ";
        }
    }
    else{
        //remaining middle rows
        //first star
        cout<<"* ";
        //spaces
        for(int space = 0;space<colcount-2;space++)
        {
            cout<<"  ";
        }
        //last star
        cout<<"* ";
    }

    cout<<endl;
 }



}