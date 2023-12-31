// type of inheritance

// 3.multiple inheritance

#include<iostream>
using namespace std;

class A{
    public:
    int chemistry;
    A()
    {
        chemistry = 101;
    }
   
};


class B{
    public:

    int chemistry;
       B()
    {
        chemistry = 106;
    }
   

};

class C:public A,public B{
    public:
    int math;
};

int main(){
   C obj;
   cout<<obj.A::chemistry<<" "<<obj.math<<endl;
}