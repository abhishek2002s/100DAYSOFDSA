#include<iostream>
using namespace std;
//**********constant keyword properties ************

class abc{
    int x;
    int *y;
    const int z;
    public:
    // abc()
    // {
    //     x= 0;
    //     y = new int(0);
    // }

//ctor : old style
    // abc(int _x,int _y,int _z= 0){
    // x =0;
    // y =new int(_y);
    // z= _z;
    // }

    // //intitialization list
    abc(int _x,int _y,int _z=0):x(_x),y(new int(_y)),z(z) {
        cout<<"in init list"<<endl;
        *y = *y*100;
    }

    int getX() const
    {
        return x;
    }

    void setX(int _val){
        x= _val;
    }
    int getY() const
    {
        return *y;
    }

    void sety(int _val){
        *y= _val;
    }

    int getz() const{ 
        return z;
    }
};

void printABC(const abc &a){
    cout<<a.getX()<<" "<<a.getY()<<" "<<a.getz()<<endl;
}

int main()
{
    abc a(1,2,4);
    printABC(a);

    return 0;



}



int main2()
{
    // const int x = 5; // x is constant ***********
    //initialisation cna be done
    //but we cant re-assign a value
    //x=10
    // cout<<x<<endl;


    // 2. const in pointer *************
//    const  int *a = new int(2); //CONST data,NON-CONST pointer
    // int const *a = new int(2); // same line as 15
    
    // cout<<*a<<endl;
    // int  b =20;
    // a =&b;
    // cout<<*a<<endl;


//CONST Pointer, but NON-CONST data
// int *const a = new  int(2);
// *a = 20; //chal jayega
// cout<<*a<<endl; 
    
    return 0;
}
