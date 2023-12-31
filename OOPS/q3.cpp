#include<iostream>
#include<string>
using namespace std;

class Animal{
    private:
    int weight;
public:
//state or properties
int age;
string type;


//behaviour
void eat(){
cout<<"Eating  "<<endl;
}

void sleep(){
 
cout<<"Sleeping"<<endl;
}

int getWeight(){
    return weight;
}

void setWeight(int weight){
    this->weight =weight;
}

void print()
{
    cout<<this->age<<" "<<this->weight<<" "<<this->type<<endl;
}

~Animal(){
    cout<<"i am isnide destructor"<<endl;
}


};

int main() 
{
    //for static it will call automatically destructor 
   cout<<" a obj creation"<<endl;
    Animal a;

    a.age=5;

//for dynamic we call it manually by delete keyword ::
 cout<<" b obj creation"<<endl;
    Animal* b= new Animal();
    b->age =12;
    //manullay called destructor
    delete b;

}