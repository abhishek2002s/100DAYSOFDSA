#include<iostream>
using namespace std;

//static member funtion::

class abc{
    public:
     int x,y;

     static void print()
    {
        cout<<"i am in static "<<__FUNCTION__<<endl;;
    }
};

int main()
{
    abc obj1;
    abc::print();
    abc obj2;
    abc::print();
abc::print();
}