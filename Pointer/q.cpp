#include<iostream>
using namespace std;

void changes(int** p){
 (**p)++;
}

int main()
{
    int num =10;
    int *ptr = &num;
    changes(&ptr);
    cout<<num<<endl;
   
}