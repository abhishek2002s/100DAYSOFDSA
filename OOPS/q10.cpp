#include<iostream>
using namespace std;

//4. polymorphism;
//-compile time polymorphism
//.function overloading

class Maths{
    public:

    int sum(int a,int b){
        cout<<"I am in first"<<endl;
        return a+b;
    }

    int sum(int a,int b,int  c){
         cout<<"I am in second"<<endl;
        return a+b+c;
    }


    int sum(int a,float b){
         cout<<"I am in third"<<endl;
        return a+b;
    }
};

int main(){
    Maths obj;

    cout<<obj.sum(2,5);
}