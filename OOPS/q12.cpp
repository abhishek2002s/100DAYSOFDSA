#include<iostream>
using namespace std;
//4: ploymorphism 
//RUn time polymorphism
//overreading


class Animal{
    public:

    Animal()
    {
        cout<<"i am in animal customer"<<endl;
    }
    //override
      void speak(){
        cout<<"Speaking"<<endl;
    }
};



class Dog:public Animal{
    public:
        Dog()
    {
        cout<<"i am in dog customer"<<endl;
    }
    //override
    void speak(){
        cout<<"barking"<<endl;
    }

};

int main()
{
// Dog a;
// a.speak();

// //upcasting
// Animal* a = new Dog;
// a->speak();

// //downcasting
// Dog* b =(Dog*) new Animal();
// b->speak();

// Animal* a = new Animal(); --> i am in animal constructor
// Dog* a = new Dog(); -> both cinstructor print

Dog* a = (Dog*)new Animal();
}