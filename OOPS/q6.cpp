// type of inheritance

// 1.single inheritance

#include<iostream>
using namespace std;

class Car{
    public:
    string name;
    int weight;
    int age;

    void speedUp(){
        cout<<"Speeding up"<<endl;
    }

    void breakMarro(){
        cout<<"break maradi"<<endl;
    }
};


class scorpio:public Car{

};

int main(){
    scorpio babbarwali;
    babbarwali.speedUp();
}