#include<iostream>
using namespace std;

//Area of circle

float Area(float radius)
{
    float result = 3.14*(radius*radius);
    return result;
}

int main()
{
    float radius ;
    cin>>radius;

    float area = Area(radius);
    cout<<"Area of circle is "<<area;
}