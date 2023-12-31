#include<iostream>
using namespace std;

class abc
{
    public:
    int x;
    int *y;

   abc(int _x,int _y) : x(_x), y(new int(_y)) {}

//    //default dumb copy constructor : it does shallow copy
//    abc(const abc &obj){
//     x = obj.x;
//     y= obj.y;
//    }


   //Deep copy
   abc(const abc &obj){
    x = obj.x;
    y= new int(*obj.y);
   }

    void print() const{
        printf("X:%d\nPTR y :%p\nContent of y (*y) :%d\n\n",x,y,*y);
    }

//disturctor -> delete
 
    ~abc()
    {
        delete y;
    }

};

int main()
{
    abc a(1,2);
        cout<<"printing a\n";
    a.print();
    
    abc b = a; // call hot hai copy constructor
        cout<<"printing b\n";
    b.print();

    *b.y = 20;
    cout<<"printing b\n";
    b.print();

    cout<<"printing a\n";
    a.print();
    return 0;
}