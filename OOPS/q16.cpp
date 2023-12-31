#include<iostream>
using namespace std;

//static data member

class abc{
    public:
  static  int x,y;

    void print() const
    {
cout<<x<<" "<<y<<endl;
    }
};

int abc::x;//initailse the static 
int abc::y;// initailise the static method
int main()
{
    abc obj1;
    obj1.x =1;
    obj1.y=2;
    obj1.print();
    abc obj2;
    obj2.x=10;
    obj2.y=30;
    obj1.print();
    obj2.print();
}