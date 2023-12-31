
#include<iostream>
using namespace std;

//Four opps of plliar :::
// 1.Encapsulation
class Animal{
//perfect encapsulate::
 private:
 int age;
 int weight;

public:
 void eat(){
    cout<<"Eating"<<endl;
 }

int getAge(){
    return this->age;
}
void setAge(int age){
    this->age = age;
}

};


int main()
{
    cout<<"Hello world "<<endl;
    return 0;
}