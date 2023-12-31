// type of inheritance

// 4.hiererichal inheritance

#include<iostream>
using namespace std;


class Car{
    public:
    int age;
    int weight;

    void speedUp(){
        cout<<"Speeding up"<<endl;
    }
};

class Scorpio:public Car{

};

class fortuner:public Car{

};

int main()
{
    Scorpio s11;
    s11.speedUp();

    fortuner f11;
    f11.speedUp();
}