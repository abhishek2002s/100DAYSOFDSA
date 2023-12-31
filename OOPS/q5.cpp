//Four opps of plliar :::
// 2.Inheritance

#include<iostream>
using namespace std;

// class Animal{
//     public:
//     int age;
//     int weight;



//     void eat(){
//         cout<<"Eating"<<endl;
//     }
// };

// class Dog:public Animal{

// };


// int main (){
//     Dog d1;
//     d1.eat();
//     return 0;
// }


// ex1 : private inherit 

// class Animal{
//     private:
//     int age;
//     int weight;

// };

// class Dog:private Animal{
//     public:
//     void print(){
//         cout<<this->age;
//     }

// };


// int main (){
//     Dog d1;
// d1.print();
//     return 0;
// }



//ex.2 *** protected inherit
// class Animal{
//     protected:
//     int age;
//     int weight;

// };

// class Dog:private Animal{
//     public:
//     void print(){
//         cout<<this->age;
//     }

// };


// int main (){
//     Dog d1;
// d1.print();
//     return 0;
// }

// ex3 : public inherit
class Animal{
    public:
    int age;
    int weight;

};

class Dog:public Animal{
    public:
    void print(){
        cout<<this->age;
    }

};


int main (){
    Dog d1;
cout<<d1.age;
    return 0;
}

