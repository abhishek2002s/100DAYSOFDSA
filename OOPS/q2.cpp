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


// default cunstructor ******
Animal(){
       this->weight =0;
    this->age=0;
    this->type="";
    cout<<"Constructor called"<<endl;
}

//paramterised constructer
Animal(int age){
    this->age = age;
    cout<<"Paramterised constructor called"<<endl;
}

//paramterised 2 constructer
Animal(int age,int weight){
    this->age = age;
    this->weight = weight;
    cout<<"Paramaterised constructor 2 called"<<endl;
    }

    //copy constructor
    Animal(Animal& obj){
        this->age = obj.age;
        this->weight = obj.weight;
        this->type = obj.type;

        cout<<"I am inside copy constructor "<<endl;
    }
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


};

int main()
{
    //dynamic memory
//     Animal* suresh = new Animal;

//     (*suresh).age = 15;
//     (*suresh).type= "billi";

//     //alternate -dynamic;
//     suresh->age = 17;
//     suresh->type = "kutta";

// suresh->eat();
// suresh->sleep();


//default constructor for static and dynamic
// Animal a;
// Animal*b = new Animal();



//paramterised constructor for static and dynamic
// Animal a(2);
// Animal*b = new Animal(10);


//paramterised constructor(2 paramter) for static and dynamic
// Animal a(2,10);
// Animal*b = new Animal(10,30);


// ///object copy constructer **********
// Animal c =a;
// Animal d(*b);

// Animal Animal(c);


//ex :::
Animal a;
a.age =20;
a.setWeight(101);
a.type = "kabhi";


Animal b =a;
a.print();
b.print();


a.type[0] = 'a';
cout<<"a -> ";
a.print();
b.print();
}