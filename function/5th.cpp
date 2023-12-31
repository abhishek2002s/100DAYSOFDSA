#include<iostream>
using namespace std;
//student grade problem

char Grade(int marks)
{
    if(marks>=90)
    {
        return 'A';
    }

    else if(marks>=80)
    {
        return 'B';
    }

   else  if(marks>=70)
    {
        return 'C';
    }

   else  if(marks>=60)
    {
        return 'D';
    }
    else
    {
        return 'E';
    }
}


int main()
{
    int marks;
    cin>>marks;


    char result  = Grade(marks);
    cout<<"Grade is "<<result;  
}